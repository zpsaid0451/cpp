//Title: MusicPlayer.cpp
//Author: Ping Zhang
//Date: 10/15/2022
//Description: This is part of the project 3 in CMSC 202 @ UMBC
//This is the music player that holds a music catalog and allows the user to build a playlist
//Name: MusicPlayer - Default Constructor

#include "MusicPlayer.h"

  //Precondition: None
  //Postcondition: Dynamically creates a new MusicPlayer and populates m_filena\
me FILE_NAME
  MusicPlayer::MusicPlayer(){

  }



  //Name: ~MusicPlayer - Destructor
  //Precondition: None
  //Postcondition: Destructs all songs in the catalog and all songs in the play\
list
  ~MusicPlayer(){

  }



  //Name: LoadCatalog(string filename)
  //Precondition: Requires filename
  //Postcondition: Loads the file of songs into the m_songCatalog (as song objects) using the DELIMITER
 void MusicPlayer::LoadCatalog(string filename){

 }


  //Name: MainMenu
  //Precondition: None
  //Postcondition: Manages the application and the menu. Calls until user chooses to quit.

  void MusicPlayer::MainMenu(){
    bool userChoice;
      do {      
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

    while(userChoice);

  }



  //Name: DisplaySongs
  //Precondition: User enters year using constants above (2010-2021)
  //Postcondition: Lists all songs (numbered) for that year by ranking
  void MusicPlayer::DisplaySongs(){

  }


  //Name: AddSong
	//Precondition: m_songCatalog is populated and m_playList exists
  //Postcondition: Displays the songs for a specific year. Adds a song to the m\
_playList by dynamically allocating a new song based on the song in the catalog
  //               and inserting it in the end.
  //               May have duplicate songs on a playlist.
  //               If the user chooses 2010, the user does not have to choose s\
omething from 2010 but it does need to be valid (between 1 - 1200)
  void MusicPlayer::AddSong(){

  }

  //Name: DisplayPlaylist
  //Precondition: None (can be empty)
  //Postcondition: Displays the playlist or tells the user it is empty
  void MusicPlayer::DisplayPlaylist(){

  }



  //Name: PlaySong
  //Precondition: Playlist should be populated
  //Postcondition: Allows the user to choose a song from the playlist to play.
  //               Removes chosen song from playlist after "played"
  void MusicPlayer::PlaySong(){

  }