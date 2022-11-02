//Title: MusicPlayer.cpp
//Author: Ping Zhang
//Date: 10/15/2022
//Description: This is part of the project 3 in CMSC 202 @ UMBC
//This is the music player that holds a music catalog and allows the user to build a playlist
//Name: MusicPlayer - Default Constructor

#include "MusicPlayer.h"


//Precondition: None
//Postcondition: Dynamically creates a new MusicPlayer and populates m_filename FILE_NAME
MusicPlayer::MusicPlayer(){
	m_playList = new Playlist();
}



//Name: ~MusicPlayer - Destructor
//Precondition: None
//Postcondition: Destructs all songs in the catalog and all songs in the playlist
	MusicPlayer::~MusicPlayer(){

}



//Name: LoadCatalog(string filename)
//Precondition: Requires filename
//Postcondition: Loads the file of songs into the m_songCatalog (as song objects) using the DELIMITER
void MusicPlayer::LoadCatalog(string filename){
	string title;
	string artist;
	string years;
	string rank;


	ifstream myMusicFile(filename);
	if (myMusicFile.is_open()) {
		cout << "Your file was imported!\n" << endl;
	while (getline(myMusicFile, title, DELIMITER) && getline(myMusicFile,artist,DELIMITER)){
		getline(myMusicFile, years, DELIMITER);
		getline(myMusicFile,rank);
		cout << "year:" << years << "rank " << rank << endl;
		int intYear = stoi(years);
		int intRank = stoi(rank);
		m_songCatalog.push_back(new Song(title,artist,intYear,intRank));

	}
	cout <<"Songs loaded: " << m_songCatalog.size() << endl;
	myMusicFile.close();   
}else{
	cout << "not found" << endl;
}
}


//Name: MainMenu
//Precondition: None
//Postcondition: Manages the application and the menu. Calls until user chooses to quit.

void MusicPlayer::MainMenu(){
	int choice;
	int years;
	int numSong;
	
		do {      
			cout << "What would you like to do? " << endl;
			cout << "1. Display Songs by Year" << endl;
			cout << "2. Add Song" << endl;
			cout << "3. Display Playlist" << endl;
			cout << "4. Play Song" << endl;
			cout << "5. Quit"<< endl;
			cin >> choice;

					//check for validation
			if (choice < 1 || choice > 5) {
			while (choice < 1 || choice > 5) {
					cout << "\nInvalid selection. Please re-enter: " << endl;
					cin >> choice;
			}
			}
			if (choice == 1){
					cout << choice << endl;
					DisplaySongs();
			}

			if (choice == 2){
					AddSong();
					// playlist
			}

			if (choice == 3){
				cout << "Your Playlist" << endl;
				// playlist
				DisplayPlaylist();
			
				
			}
			if (choice == 4){
				cout << "Your Playlist" << endl;
				PlaySong();
				
			}
			if (choice ==5){
				cout << "goodbye" << endl;
			}
		}while(choice != 5);
}


//Name: DisplaySongs
//Precondition: User enters year using constants above (2010-2021)
//Postcondition: Lists all songs (numbered) for that year by ranking
void MusicPlayer::DisplaySongs(){
	int years;
	cout << "Which year would you like to display? (2010-2021)" << endl;
	cin >> years;
	while (years < LOW_YEAR || years > HIGH_YEAR) {
	cout << "Which year would you like to display? (2010-2021)" << endl;
	cin >> years;
	}
	cout << "******" << years << "*****" << endl;
	for(unsigned int i = 0; i<m_songCatalog.size();i++){

		Song* theSong = m_songCatalog[i];
		if (theSong->GetYear()  == years){
			cout << i+1 << ". \"" << theSong->GetTitle() << "\" By " << theSong->GetArtist() << " " << theSong->GetRank() << "/100 from " << theSong->GetYear() << endl;
		}
	}


}


//Name: AddSong
//Precondition: m_songCatalog is populated and m_playList exists
//Postcondition: Displays the songs for a specific year. Adds a song to the m_playList by dynamically allocating a new song based on the song in the catalog
//               and inserting it in the end.
//               May have duplicate songs on a playlist.
//               If the user chooses 2010, the user does not have to choose something from 2010 but it does need to be valid (between 1 - 1200)
void MusicPlayer::AddSong(){
	// if playlist empty 
	
	// cout << "***Current Playlist is Empty***" << endl;
	int addSongNum;
	DisplayPlaylist();
	cout << "Choose the songs you would like to add to the playlist." << endl;
	
	DisplaySongs();
	cout << "Enter the number of the song you would like to add:" << endl;
	cin >> addSongNum;
	string title = m_songCatalog.at(addSongNum-1)->GetTitle();
	string artist = m_songCatalog.at(addSongNum-1)->GetArtist();
	int year = m_songCatalog.at(addSongNum-1)->GetYear();
	int rank = m_songCatalog.at(addSongNum-1)->GetRank();
	m_playList->AddSong(title,artist,year,rank);
	cout << "Played: " << *m_playList->GetPlaylistDetails(m_playList->Size() -1) << endl;

}


//Name: DisplayPlaylist
//Precondition: None (can be empty)
//Postcondition: Displays the playlist or tells the user it is empty
void MusicPlayer::DisplayPlaylist(){
	int playListSize = m_playList->Size();
	if (playListSize == 0) {
		cout << "***Current Playlist is Empty***" << endl;
	}else {
		 for (int i = 0; i < m_playList->Size(); i++){
			cout << i+1 << "." <<*m_playList->GetPlaylistDetails(i) << endl;
		 }
	}
}



//Name: PlaySong
//Precondition: Playlist should be populated
//Postcondition: Allows the user to choose a song from the playlist to play.
//               Removes chosen song from playlist after "played"
void MusicPlayer::PlaySong(){
	DisplayPlaylist();
	int choose;
    cout << "Which song would you like to play?" << endl;
	cin >> choose;
	while (choose < 0 || choose > m_playList->Size()) {
	cout << "Which year would you like to like to play?" << endl;
	cin >> choose;
	}
	cout << "Played:" << *m_playList->GetPlaylistDetails(choose -1) << endl;
	cout << "before play at" << endl;
	cout << "testing choose" << choose << endl;
	m_playList->PlayAt(choose -1); 
	cout << "after play at" << endl;
	//check if num within range can be choose.
	//from that num, 

}