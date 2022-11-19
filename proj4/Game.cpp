 
   /*Title: Game.cpp
Author: Ping Zhang
Date: 11/11/2022
Description: This is Game cpp files of UMBC Starcraft project
*/
 
 #include "Game.h"
 #include <random>
  // Name: Game() - Default Constructor
  // Description: Creates a new Game
  // Preconditions: None
  // Postconditions: Initializes all game variables to defaults (constants)
  // including rests, specials, curArea, filename, curZerg (nullptr), and starting wins
  Game::Game(){
	m_filename = FILE_NAME;
	m_numRests = NUM_RESTS;
	m_numSpecial = NUM_SPECIAL;
	m_curArea = START_AREA ;
	m_wins = START_WINS ;
	m_curZerg = nullptr;
  }


  // Name: Game(string filename) - Overloaded Constructor
  // Description: Creates a new Game
  // Preconditions: None
  // Postconditions: Initializes all game variables to defaults (constants)
  //                 including rests, specials, curArea, filename (from passed variable),
  //                 curZerg (nullptr), and starting wins
  Game::Game(string mapFile){
	m_filename = mapFile;

	m_numRests = NUM_RESTS;
	m_numSpecial = NUM_SPECIAL;
	m_curArea = START_AREA ;
	m_wins = START_WINS ;
	m_curZerg = nullptr;

  }


  // Name: ~Game
  // Description: Destructor
  // Preconditions: None
  // Postconditions: Deallocates anything dynamically allocated in Game (terran, zergs, and map)
  Game::~Game(){
	m_filename = "";
	m_numRests = 0;
	m_numSpecial = 0;
	m_curArea = 0;
	m_wins = 0;
	delete m_myTerran;
	m_myTerran = nullptr;
	delete m_curZerg;
	m_curZerg = nullptr;
	// m_myMap
	// vetor loop delete all the pointer inside the vetor
  }



  // Name: LoadMap()
  // Description: Dynamically creates areas and inserts them into the m_myMap vector
  // Note: the size of the map is not known - you should not use constants for this.
  //       Also, you can use stoi to convert strings to integers
  // Precondition: m_filename is populated
  // Postcondition: Map is populated with area objects.
  void Game::LoadMap(){
	string areaId; 
	string areaName;
	string areaDesc;
	string north;
	string east;
	string south; 
	string west;

	ifstream myGameFile(m_filename);
	if (myGameFile.is_open()) {
		while (getline(myGameFile,areaId, DELIMITER) && getline(myGameFile,areaName,DELIMITER)){
			getline(myGameFile, areaDesc, DELIMITER);
			getline(myGameFile,north,DELIMITER);
			getline(myGameFile,east,DELIMITER);
			getline(myGameFile,south,DELIMITER);
			getline(myGameFile,west);

			int intId = stoi(areaId);
			int intNorth = stoi(north);
			int intEast = stoi(east);
			int intSouth = stoi(south);
			int intWest = stoi(west);
			m_myMap.push_back(new Area(intId,areaName,areaDesc,intNorth,intEast,intSouth,intWest));

		}
	// cout <<"Rocky Area " << areaDesc << endl;
	myGameFile.close();   
}else{
	cout << "not found" << endl;
}
}
	// m_myMap.push_back()


  



  // Name: TerranCreation()
  // Description: Allows user to choose a new terran (or child) to play with. May
  //              be either Terran, Marine, Ghost, or Battlecruiser.
  // Preconditions: None
  // Postconditions: m_myTerran is populated
  void Game::TerranCreation(){
	string terranName;
	int choice;
	cout << "Terran Name: "<< endl;
	cin >> terranName;

	// cout << "Select a class "<< endl;	
	// cout << "1. Marine" << endl;
	// cout << "2. Ghost" << endl;
	// cout << "3. Battlecruiser" << endl;
	// cout << "4. No Class" << endl;
	// cin >> choice;
	// if (choice < 1 || choice > 4) {
		while (choice < 1 || choice > 4) {
			cout << "Select a class "<< endl;	
			cout << "1. Marine" << endl;
			cout << "2. Ghost" << endl;
			cout << "3. Battlecruiser" << endl;
			cout << "4. No Class" << endl;
			cin >> choice;
		}
	// }


	if (choice ==1){
		Entity* newMarine = new Marine(terranName, MARINE_HEALTH);
		m_myTerran = newMarine;
	}
	if (choice ==2){
		Entity* newGhost = new Ghost(terranName,GHOST_HEALTH);
		m_myTerran = newGhost;
	}
	if (choice ==3){
		Entity* newBattlecruiser = new Battlecruiser(terranName,BATTLECRUISER_HEALTH);
		m_myTerran = newBattlecruiser;
	}
	if (choice ==4){
		Entity* newTerran = new Terran(terranName, TERRAN_HEALTH);
		m_myTerran = newTerran;
	}
  }

  // Name: StartGame()
  // Description: Welcomes the player to the game. Calls LoadMap, TerranCreation,
  //              prints the current area then calls action
  // Preconditions: Input file must exist
  // Postconditions: Map is loaded, User has chosen a terran to play with,
  //                 printed the starting area, and calls action
  void Game::StartGame(){
	cout << "Welcome to UMBC Starcraft!"<< endl;
	LoadMap();
	TerranCreation();
	m_myMap.at(m_curArea)->PrintArea();
	m_curZerg = RandomZerg();
	Action();
  }


  // Name: Action()
  // Description: Menu for game. Calls RandomZerg for current location then displays menu.
  //              Player can look, move, attack, rest, stats, or quit
  //              If player moves, clears out the m_curZerg and sets m_curZerg = RandomZerg
  //              If player looks, will NOT display zerg again (as this is a function of moving)
  //              Can only attack if there is actually a zerg in this area
  // Preconditions: Everything in start has been completed
 // Postconditions: Game continues until quit or player dies
  void Game::Action(){
	int choice;

		do {      

			choice = 0;
			while (choice < 1 || choice > 6) {
				cout << "What would you like to do? " << endl;
				cout << "1. Look" << endl;
				cout << "2. Move" << endl;
				cout << "3. Attack Zerg" << endl;
				cout << "4. Rest" << endl;
				cout << "5. Check Stats"<< endl;
				cout << "6. Quit"<< endl;
				cin >> choice;
			}
			//}
			if (choice == 1){
				// find the curr locatation
				m_myMap.at(m_curArea)->PrintArea();
				// for (unsigned int i = 0; i < m_myMap.size();i++){
				// 	cout << m_myMap[i] <<endl;
				// m_myMap.at(m_curArea)->CheckDirection()


				
				// if (m_curArea)

				
			}

			if (choice == 2){
				Move();
			}

			if (choice == 3){
				if (m_curZerg !=nullptr){
					Attack();
				}else {
					cout << "No zerg here" << endl;
				}
			
			}

			if (choice == 4){
				Rest();
			
			}

			if (choice ==5){
				Stats();
			}

			if (choice == 6){
				cout << "Good bye!" << endl;
			}
		}while(choice != 6);

  }


  // Name: RandomZerg()
  // Description: Used to randomly create a dynamically allocated zerg
  //              (25% chance of nothing, 25% chance of Zergling, Mutalisk, or Hydralisk.)
  //              When chosen, displays the description
  //              of the zerg or displays "It is peaceful here."
  // Preconditions: Has an entity pointer to hold zerg child or nullptr
  // Postconditions: Returns object of type Zergling, Mutalisk, Hydralisk, or nullptr
  Entity* Game::RandomZerg(){
	int randZerg = (rand() % (4 - 1 + 1)) + 1;
	if (randZerg == 1) {
		
		return nullptr;
	}else if (randZerg == 2) {
		cout << "A small terrifying zergling waits here." << endl;
		Entity* newZergling = new Zergling("Zergling",ZERGLING_HEALTH);
		return newZergling;
		
	}else if (randZerg == 3) {
		cout << "A large flying mutalisk hovers here." << endl;
		Entity* newMutalisk = new Mutalisk("Mutalisk",MUTALISK_HEALTH);
		return newMutalisk;
	}else if (randZerg == 4) {
		cout << "A medium sized hydralisk slithers here waiting to cover you with acid." << endl;
		Entity* newHydralisk = new Hydralisk("Hydralisk",HYDRALISK_HEALTH);
		return newHydralisk;
	}	 
	return nullptr;
  }



  // Name: Rest
  // Description: If no zerg in current area, allows player to rest
  // Preconditions: Must be valid area with no zerg (area must exist) and have rests
  // Postconditions: Reduces available rests by one and increases hp by 10
  //                 using REST_HEAL (regardless of starting value)
  void Game::Rest(){
	if (m_curZerg ==nullptr && m_numRests>0){
		m_numSpecial = NUM_SPECIAL;
		m_numRests--;
	
	// if you rest you will increase health, set number of specials to the constant value, and decrease rests
	}else {
		cout << "You cannot rest with a zerg in the area." << endl;
	}
  }



  // Name: Move
  // Description: Asks a player which direction they would like to move.
  //              Moves player from one area to another (updates m_curArea)
  // Preconditions: Must be valid move (area must exist)
  // Postconditions: Displays area information
  void Game::Move(){
	char direction;
	// cout << "which direction?(N E S W)" << endl;
	// cin >> direction;
	//int newPosition = m_myMap.at(m_curArea)->CheckDirection(direction);
	int newPosition = -1;
	while (newPosition == -1){
		cout << "which direction?(N E S W)" << endl;
		cin >> direction;
		newPosition = m_myMap.at(m_curArea)->CheckDirection(direction);
	}
	m_curArea = newPosition;
	m_curZerg = RandomZerg();
  }



  // Name: Attack
  // Description: Allows player to attack an enemy entity.m_curZerg
  // Preconditions: Must have enemy Zerg in area
  // Postconditions: Indicates who wins and updates health(hp) as battle continues.
  //                 Both Terran and Zerg attack every round until one or more has <= 0 health
  //                 May need to deallocate enemy Zerg to prevent memory leaks.
  //                 When either Zerg or Terran <= 0 health, calls ProcessBattle
void Game::Attack(){
	bool isZergAlive = true; 
	bool playerAlive = true;
	int zergDamage;
	int terranDamage;
	
	
	// cout << "1. Normal Attack" << endl;
	// cout << "2. Special Attack" << endl;
	// cin >> attack;
	
	while ( isZergAlive && playerAlive) {
		int attack = 0;
		while (attack < 1 || attack > 2) {
			cout << "1. Normal Attack" << endl;
			cout << "2. Special Attack" << endl;
			cin >> attack;
		}
	
	int terranHealth = m_myTerran->GetHealth();
	int zergHealth = m_curZerg->GetHealth();

	// TODO: zerg have 25% chance to do a special attack based on discord
	
	int randZergSAttack = (rand() % (4 - 1 + 1)) + 1;
	if (randZergSAttack == 1) {
		zergDamage = ((Zerg *) m_curZerg)->SpecialAttack();
	}else {
		zergDamage = m_curZerg->Attack();
	}

	if (attack == 1){
		terranDamage = m_myTerran->Attack();
	}
	else if (attack == 2){
		terranDamage = ((Terran *) m_myTerran)->SpecialAttack();
		m_numSpecial --;
	}	

	terranHealth = terranHealth - zergDamage;
	zergHealth = zergHealth - terranDamage;
	
	//set terran health after damage dealt
	m_myTerran->SetHealth(terranHealth);
	//set zerg health after damage dealt
	m_curZerg->SetHealth(zergHealth);

	//display damage dealt by player
	// cout << m_myTerran->GetName() << "attacks dealing " << m_myTerran->GetHealth()<<"damage! " << endl;

	//display damage dealt by zerg
	// cout << m_curZerg->GetName() << " deals" << m_curZerg->GetHealth() <<  " point of damage!" <<  endl;

	//check if player or zerg die and display proper damage
	//call Game->ProcessBattle when either zerg or terran have no health left
	if (terranHealth >0 && zergHealth >0) {

		cout << m_myTerran->GetName() << " 's health: " << m_myTerran->GetHealth()<< endl;
		cout << m_curZerg->GetName() << " 's health: " << m_curZerg->GetHealth() << endl;
		
	}

	if (terranHealth <=0 ){
		playerAlive =false;
		
		// cout << "you lose" << endl;
		// m_wins ++;
		//TODO: Call process battle
		//ProcessBattle(false or true don't matter, false)
	} else if (zergHealth <=0) {
		  isZergAlive=false;
		//   ProcessBattle(false, true);
		// cout << "You have defeated the "<< m_curZerg->GetName() << endl;
		//TODO: Call process battle
		//ProcessBattle(false, true)
	}
	}
	
	ProcessBattle(isZergAlive, playerAlive);

	if (m_curZerg != nullptr){
		delete m_curZerg;
		m_curZerg=nullptr;
	}
	
}
 

  // Name: Stats()
  // Description: Displays the information about the player (name, hp, rests, specials, and wins)
  // Preconditions: None
  // Postconditions: None
  void Game::Stats(){
	cout << "Name: " << m_myTerran->GetName() << endl;
	cout << "HP: " <<  m_myTerran->GetHealth() << endl;
	cout << "Rests: " << m_numRests << endl;
	cout << "Special: " << m_numSpecial << endl;
	cout << "Wins " << m_wins << endl;
  }


  // Name: ProcessBattle
  // Description: Called when either the zerg or terran have no health left
  //       Displays who won (Zerg, Terran, mutual destruction), adds wins if necessary,
  //       and has a 10% chance of earning another rest action.
  // Preconditions: Zerg or terran are <= 0 health
  // Postconditions:
  void Game::ProcessBattle(bool zergAlive, bool alive){
	if (zergAlive && alive == false){
		cout << "you lose" << endl;
		// m_wins ++;
		//TODO: Call process battle
		//ProcessBattle(false or true don't matter, false)
	} else if (alive && zergAlive == false) {
	
		cout << "You have defeated the "<< m_curZerg->GetName() << endl;
		m_wins ++ ;
		int earnRest = (rand() % (10 - 1 + 1)) + 1;
		if (earnRest == 1) {
			m_numRests ++;
			cout << "you earn another rest!" << endl;
		//TODO: Call process battle
		//ProcessBattle(false, true)
	}

  }
}