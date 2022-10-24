//Title: Playlist.cpp
//Author: Ping Zhang
//Date: 10/15/2022
//Description: This is part of the project 3 in CMSC 202 @ UMBC
//This is a linked list class used to store songs for a playlist

#include "Playlist.h"

 // Name: Playlist() - Default Constructor
  // Desc - Creates a new empty playlist
  // Preconditions - None
  // Postconditions - Sets everything to either nullptr or 0
  Playlist::Playlist(){

  }

  // Name: ~Playlist - Destructor
  // Desc - Removes all of the songs from the playlist
  // Preconditions - Playlist must have songs
  // Postconditions - Playlist will be empty and m_head and m_tail will be nullptr. Size will be 0
 ~Playlist(){

 }

 
  // Name: AddSong(string, string, int, int)
  // Desc - Dynamically allocates new song using title, artist, year, and rank
  // Preconditions - Playlist allocated
  // Postconditions - New song inserted in end of list
  void Playlist::AddSong(string, string, int, int){

  }

  // Name: GetPlaylistDetails()
  // Desc - Returns a song object from a specific location
  // Preconditions - Playlist populated
  // Postconditions - Returns the data (does not output it)
  Song* Playlist::GetPlaylistDetails(int location){

  }


   // Name: Size
  // Desc - Returns the m_size
  // Preconditions - Playlist starts at size 0
  // Postconditions - Returns the size
  int Playlist::Size(){

  }


  // Name: PlayAt
  // Desc - Passed the song that is to be played from the playlist
  //       "Plays" a song by removing it from the playlist at a specific location
  // Recommendations - Code this function last (dead last)
  // Preconditions - Playlist has been populated
// Hint: Do not forget about removing from the front, middle, or end of the list
  //       Could also remove the only node
  // Postconditions - Playlist is reduced in size by one based on which song is played
  void Playlist::PlayAt(int location){

  }