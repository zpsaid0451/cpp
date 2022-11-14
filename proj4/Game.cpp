 
 #include "Game.h"
  // Name: Game() - Default Constructor
  // Description: Creates a new Game
  // Preconditions: None
  // Postconditions: Initializes all game variables to defaults (constants)
  // including rests, specials, curArea, filename, curZerg (nullptr), and starting wins
  Game::Game(){

  }


  // Name: Game(string filename) - Overloaded Constructor
  // Description: Creates a new Game
  // Preconditions: None
  // Postconditions: Initializes all game variables to defaults (constants)
  //                 including rests, specials, curArea, filename (from passed variable),
  //                 curZerg (nullptr), and starting wins
  Game::Game(string){

  }


  // Name: ~Game
  // Description: Destructor
  // Preconditions: None
  // Postconditions: Deallocates anything dynamically allocated in Game (terran, zergs, and map)
  Game::~Game(){

  }



  // Name: LoadMap()
  // Description: Dynamically creates areas and inserts them into the m_myMap vector
  // Note: the size of the map is not known - you should not use constants for this.
  //       Also, you can use stoi to convert strings to integers
  // Precondition: m_filename is populated
  // Postcondition: Map is populated with area objects.
  void Game::LoadMap(){

  }



  // Name: TerranCreation()
  // Description: Allows user to choose a new terran (or child) to play with. May
  //              be either Terran, Marine, Ghost, or Battlecruiser.
  // Preconditions: None
  // Postconditions: m_myTerran is populated
  void Game::TerranCreation(){

  }


  // Name: StartGame()
  // Description: Welcomes the player to the game. Calls LoadMap, TerranCreation,
  //              prints the current area then calls action
  // Preconditions: Input file must exist
  // Postconditions: Map is loaded, User has chosen a terran to play with,
  //                 printed the starting area, and calls action
  void Game::StartGame(){

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

  }


  // Name: RandomZerg()
  // Description: Used to randomly create a dynamically allocated zerg
  //              (25% chance of nothing, 25% chance of Zergling, Mutalisk, or Hydralisk.)
  //              When chosen, displays the description
  //              of the zerg or displays "It is peaceful here."
  // Preconditions: Has an entity pointer to hold zerg child or nullptr
  // Postconditions: Returns object of type Zergling, Mutalisk, Hydralisk, or nullptr
  Entity* Game::RandomZerg(){
	return nullptr;
  }



  // Name: Rest
  // Description: If no zerg in current area, allows player to rest
  // Preconditions: Must be valid area with no zerg (area must exist) and have rests
  // Postconditions: Reduces available rests by one and increases hp by 10
  //                 using REST_HEAL (regardless of starting value)
  void Game::Rest(){

  }



  // Name: Move
  // Description: Asks a player which direction they would like to move.
  //              Moves player from one area to another (updates m_curArea)
  // Preconditions: Must be valid move (area must exist)
  // Postconditions: Displays area information
  void Game::Move(){

  }


  // Name: Attack
  // Description: Allows player to attack an enemy entity.
  // Preconditions: Must have enemy Zerg in area
  // Postconditions: Indicates who wins and updates health(hp) as battle continues.
  //                 Both Terran and Zerg attack every round until one or more has <= 0 health
  //                 May need to deallocate enemy Zerg to prevent memory leaks.
  //                 When either Zerg or Terran <= 0 health, calls ProcessBattle
void Game::Attack(){

}


  // Name: Stats()
  // Description: Displays the information about the player (name, hp, rests, specials, and wins)
  // Preconditions: None
  // Postconditions: None
  void Game::Stats(){

  }


  // Name: ProcessBattle
  // Description: Called when either the zerg or terran have no health left
  //       Displays who won (Zerg, Terran, mutual destruction), adds wins if necessary,
  //       and has a 10% chance of earning another rest action.
  // Preconditions: Zerg or terran are <= 0 health
  // Postconditions:
  void Game::ProcessBattle(bool zergAlive, bool alive){

  }