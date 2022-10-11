#include "Race.h"
#include <cstdlib>
// string racerName;

// int choiceToDo;

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
    // 1. Resets length of race - 
    m_track.SetLength(0);

    // 2. Increments the number of races for the player
    int currentRace = m_myPlayer.GetRaces();
    currentRace = currentRace + 1;
    m_myPlayer.SetRaces(currentRace);

    // 3. Sets up track (user chooses length of track) and populates obstacles
    //populate obstacles
    m_track.PopulateObstacles();
    
    cout << "How long would you like the race?" << endl;
    cin >> totalRace;
    
    while (totalRace < 1 || totalRace > MAX_LENGTH) {
        cout << "How long would you like the race?" << endl;
        cin >> totalRace;
    }
    int playerWon = m_track.CheckWin();
    while (playerWon != 0 || playerWon != 1 || playerWon != 2 || playerWon !=3){
        int raceOptionsNum = RaceOptions();
        //testing
        cout << "raceOptionNumber: " << raceOptionsNum << endl;
        if (raceOptionsNum == 1){
            cout << "inside race option" << endl;
            m_track.GetStatus();

        }
        if (raceOptionsNum == 2){
            cout << "You are trying to progress the race!" << endl;
            //in track.cpp
            
            ProgressRace(raceOptionsNum);
            m_track.GetStatus();
            cout << "after get status" << endl;
           

        }
        if (raceOptionsNum == 3){
            cout << "You are trying to progress the race!" << endl;
            ProgressRace(raceOptionsNum);
            m_track.GetStatus();
            

        }
        if (raceOptionsNum == 4){
            cout << "You are trying to progress the race!" << endl;
            ProgressRace(raceOptionsNum);
            m_track.GetStatus();

        }
        playerWon = m_track.CheckWin();
    }
    

    // 5. Checks to see if someone won (their location exceeds the length of the race)
    //check if track have a winner

    switch(playerWon)
    {
        case 0:
            cout << "You won the race!"<< endl;
            m_myPlayer.IncreaseStat();
            m_myPlayer.IncreaseWins();
            break;
        case 1:
            cout << "Play 1 won the race!"<< endl;
            break;
        case 2:
            cout << "Play 2 won the race!"<< endl;
            break;
        case 3:
            cout << "Play 3 won the race!"<< endl;
            break;
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
    int action = stat - 2;
    int obstacleDifficulty = (rand() % (COMP_MAX + 1 - COMP_MIN)) + COMP_MIN;
    int myPlayerNum; 
    switch(action)
    {
        case 0:
            myPlayerNum = BASE_SKILL + (5 * m_myPlayer.GetSpeed());
            break;
        case 1:
            myPlayerNum = BASE_SKILL + (5 * m_myPlayer.GetAgility());
            break;
        case 2:
            myPlayerNum = BASE_SKILL + (5 * m_myPlayer.GetJump());
            break;
      
    }
    // what if compares the BASE_SKILL + (5 * stat) to the obstacle difficulty =
    //count falls or success
    if (myPlayerNum >= obstacleDifficulty){
        m_track.IncrementLocation(0);
        cout << "You " << "made it through the " << m_track.ConvertObstacle(0) << " obstacle!" << endl;
    }else {
        int currentFalls = m_myPlayer.GetFalls();
        currentFalls = currentFalls + 1;
        m_myPlayer.SetFalls(currentFalls);
        cout << "You fell!" << endl;
    }
    ProgressComputer(obstacleDifficulty);

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
    // testing
    cout << "choice to do :" << choiceToDo << endl;
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
        int botsObstacleDifficulty = (rand() % (COMP_MAX + 1 - COMP_MIN)) + COMP_MIN;
        if (botsObstacleDifficulty >= obstacleDifficulty){
            m_track.IncrementLocation(i);
            cout << "Player " << i << " made it through the " << m_track.ConvertObstacle(i) << " obstacle!" << endl;
        }else {
            // computer player fall
            cout << "Player "<< i <<" fell!" << endl;
        }
    }
}
