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
      m_head = nullptr;
      m_tail = nullptr;
      m_size = 0 ;
  }

  // Name: ~Playlist - Destructor
  // Desc - Removes all of the songs from the playlist
  // Preconditions - Playlist must have songs
  // Postconditions - Playlist will be empty and m_head and m_tail will be nullptr. Size will be 0
 Playlist::~Playlist(){
      m_head = nullptr;
      m_tail = nullptr;
      m_size = 0;
 }

 
  // Name: AddSong(string, string, int, int)
  // Desc - Dynamically allocates new song using title, artist, year, and rank
  // Preconditions - Playlist allocated
  // Postconditions - New song inserted in end of list
  void Playlist::AddSong(string title, string artist, int year, int rank){
      Song* newSong = new Song(title, artist,year,rank);
      if (m_head == nullptr && m_tail == nullptr){
        m_head = newSong;
        m_tail = newSong;
      }else {
        Song* theSong = m_head;
        while (theSong->GetNext() != nullptr){
            theSong = theSong->GetNext();
        }
        theSong->SetNext(newSong);
      }
      m_size++;
  }

  // Name: GetPlaylistDetails()
  // Desc - Returns a song object from a specific location
  // Preconditions - Playlist populated
  // Postconditions - Returns the data (does not output it)
  Song* Playlist::GetPlaylistDetails(int location){
      // return m_tail;
      Song* newSongP = m_head;
      if (location > m_size){
        return nullptr;
      }
      for (int i = 0; i< location; i++){
        newSongP = newSongP->GetNext();

      }
      return newSongP; 
  }


   // Name: Size
  // Desc - Returns the m_size
  // Preconditions - Playlist starts at size 0
  // Postconditions - Returns the size
  int Playlist::Size(){
    return m_size;
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
    // remove node and different conditions
    if ( location > m_size){
      return;
      // only 1 node, 
      // deleted first node in the list, need to updated m_head
      // deleted last node in the list, need to updated m_tail
      // in the middle, covered.

    }
    
    if (m_size == 1){
      delete m_head;
      m_head = nullptr;
      m_tail = nullptr;
      m_size = 0;
      return;
    } 

    if (location == 0) {
      Song *temp = m_head;
      m_head = m_head->GetNext();
      delete temp;
    }
    else {
      Song *curr = m_head;
      Song *prev = m_head;
      int counter = 0;
      while(counter < location){
        prev = curr;
        curr = curr->GetNext();
        counter++;
      } 
      if (location == m_size-1){
        m_tail = prev;
        delete curr;
      }else {
          prev->SetNext(curr->GetNext());
          delete curr;
      }
    }
    m_size--;
  }