#include "Race.h"
#include <cstdlib>

Race::Race() { 
}

// Name: StartRace()
// 1. Resets length of race
// 2. Increments the number of races for the player
// 3. Sets up track (user chooses length of track) and populates obstacles
// 4. Calls RaceOptions and calls GetStatus or calls ProgressRace (passes the user's choice)
// 5. Checks to see if someone won (their location exceeds the length of the race)
// 6. Displays the winner of race. If human player wins, increases a stat and increases wins
// Preconditions - Race conditions set up
// Postconditions - Race completed
void Race:: StartRace(){
    int totalRace;
    m_track.ResetLocation();
    int currentRace = m_myPlayer.GetRaces();
    currentRace = currentRace + 1;
    m_myPlayer.SetRaces(currentRace);

    cout << "How long would you like the race?" << endl;
    cin >> totalRace;
    
    while (totalRace < 1 || totalRace > MAX_LENGTH) {
        cout << "How long would you like the race?" << endl;
        cin >> totalRace;
    }
    m_track.SetLength(totalRace);
    m_track.PopulateObstacles();

    int playerWon = m_track.CheckWin();
    while ( m_track.CheckWin() == -1){
        int raceOptionsNum = RaceOptions();
       
        if (raceOptionsNum == 1){
            m_track.GetStatus();
        }
        if (raceOptionsNum == 2){
            cout << "You are trying to progress the race!" << endl;
            ProgressRace(raceOptionsNum);
    
        }
        if (raceOptionsNum == 3){
            cout << "You are trying to progress the race!" << endl;
            ProgressRace(raceOptionsNum);
            

        }
        if (raceOptionsNum == 4){
            cout << "You are trying to progress the race!" << endl;
            ProgressRace(raceOptionsNum);

        }
        cout << "inside:" <<endl;
        playerWon = m_track.CheckWin();

    }
 
    if (m_track.CheckWin() == 0){
        cout << "You won the race!"<< endl;
         m_myPlayer.IncreaseStat();
         m_myPlayer.IncreaseWins();
    }else {
        cout << "Player " << m_track.CheckWin() << " won the race!"<< endl;
    } 
 
}

// Name: GetRacerInfo()
// Desc - Gets the racer's name and populates the racer's name
// Preconditions - Populates m_name in Racer
// Postconditions - m_name is populated
void Race::GetRacerInfo(){
    string racerName;
    cout << "What is your racer's name?\n";
    cin >> racerName;
    m_myPlayer.SetName(racerName); 
}


// Name: ProgressRace()
// Desc - Does the following:
// 1. Deals with the human player first.
// 2. Randomly assigns (1 - 100) difficlty to all obstacles (regardless of location,
//    all players have the same level difficulty for each round)
// 3. Compares the BASE_SKILL + (5 * stat) to the obstacle difficulty to see if successfully
//    navigated. Indicates if successful and increments location. If not successful,
//    falls and increments falls
// 4. Calls ProgressComputer to deal with computer
// Preconditions - Player in race
// Postconditions - Each racer either progresses to the next obstacle, or falls
void Race::ProgressRace(int stat){
    cout << "inside progress race function" << endl;
    int action = stat - 2;
    // int obstacleDifficulty = (rand() % (COMP_MAX + 1 - COMP_MIN)) + COMP_MIN;
    int obstacleDifficulty = (rand() % BASE_DIFFICULTY + 1);
    int myPlayerNum;
    if (action == 0 and "speed" == m_track.ConvertObstacle(0)){
         myPlayerNum =  BASE_SKILL +  5 * m_myPlayer.GetSpeed();
    }
    else if (action == 1 and "agility" == m_track.ConvertObstacle(0)){
        myPlayerNum =  BASE_SKILL +  5 * m_myPlayer.GetAgility();
    }
    else if (action == 2 and "jump" == m_track.ConvertObstacle(0)){
        myPlayerNum =  BASE_SKILL +  5 * m_myPlayer.GetJump();
    } else {
        myPlayerNum = BASE_SKILL;
    }
    cout << "playerNum:" << myPlayerNum << endl;
    if (myPlayerNum > obstacleDifficulty){
        cout << "You " << "made it through the " << m_track.ConvertObstacle(0) << " obstacle!" << endl;
        m_track.IncrementLocation(0);
    }else { 
        cout << "You fell!" << endl;
        int currentFalls = m_myPlayer.GetFalls();
        currentFalls = currentFalls + 1;
        m_myPlayer.SetFalls(currentFalls);
       
    }
    ProgressComputer(obstacleDifficulty);
     cout << "end progress race function" << endl;

}

// Name: MainMenu()
// Desc - Displays and manages menu
// Preconditions - None
// Postconditions - Returns number including exit
bool Race::MainMenu(){
    cout << "What would you like to do? " << endl;
    cout << "1. Start New Race" << endl;
    cout << "2. View Racer History" << endl;
    cout << "3. Quit"<< endl;
    int choice;
    cin >> choice;
    if (choice < 1 || choice > 3) {
        while (choice < 1 || choice > 3) {
            cout << "What would you like to do? " << endl;
            cout << "1. Start New Race" << endl;
            cout << "2. View Racer History" << endl;
            cout << "3. Quit"<< endl;
            cin >> choice;
        }
    }
    if (choice == 1){
       StartRace();
        return true;
    }
    if (choice == 2){
        m_myPlayer.DisplayStatus();
        return true;
        
    }
    if (choice == 3){
        cout <<"Thanks for playing UMBC Race!" << endl;
        return false;      
    }
    return true;
}


// Name: RaceOptions()
// Desc - Displays the race menu (display status, choose speed, choose agility, or choose jump)
// Preconditions - None
// Postconditions - Returns integer of user choice (status = 1, speed = 2, agility = 3, jump = 4)
int Race:: RaceOptions(){
    int choiceToDo;
    cout << "What would you like to do?" << endl;
    cout << "1. Get Race Status\n2. Try to Sprint (Speed)\n3. Try to Dodge (Agility)\n4. Try to Jump (Jump)" << endl;
    cin >> choiceToDo;
    return choiceToDo;
            
}


// Name: ManageGame
	// Desc - Calls RaceTitle, then calls GetRacerInfo. Continually calls MainMenu
	//        until the user chooses quit then it thanks the user and quits
	// Preconditions - Game instantiated
	// Postconditions - Calls RaceTitle, then calls GetRacerInfo. Continually calls MainMenu
//                  until the user chooses quit then it thanks the user and quits

void Race:: ManageGame(){
    RaceTitle();
    GetRacerInfo();
    bool userChoice;
    do {      
        userChoice = MainMenu();
    }while(userChoice);
}


// Name: ProgressComputer
// Desc - Iterates over each computer player (players 2, 3, and 4) to see if they
//        successfully navigate through an obstacle. Indicates if they make it or fall.
//        Compares a random number between COMP_MIN and COMP_MAX to the obstacle difficulty
//        to see if they are successful
// Preconditions - obstacleDifficulty is already calculated and passed to this function
// Postconditions - For each computer player, they either make it and increment their
//         location or fall and remain on the same obstacle
void Race:: ProgressComputer(int obstacleDifficulty){
     for (int i = 1; i < NUM_RACERS; i++){ 
        int botsObstacleDifficulty = (rand() % (COMP_MAX - COMP_MIN)) + COMP_MIN;
        if (botsObstacleDifficulty > obstacleDifficulty){
            cout << "Player " << i << " made it through the " << m_track.ConvertObstacle(i) << " obstacle!" << endl;
            m_track.IncrementLocation(i);
        }else {
            cout << "Player "<< i <<" fell!" << endl;
        }
    }
}
