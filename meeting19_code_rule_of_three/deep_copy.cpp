/*Title: deep_copy.cpp
Author: CMSC 202
Date: 11/10/2022
Description: This is an example of a deep copy in C++.
*/

#include <cstring>
#include <cassert>
#include <iostream>

class MyString {
public:
  MyString(char* input){
    m_data = input;
    m_length = strlen(input);
  }
  MyString(const MyString& source){
    m_length = source.m_length;
     std::cout << "Source length: " << m_length << std::endl;
         if(source.m_data)
      {
        m_data = new char(m_length);
        for (int i = 0; i < m_length; ++i)
          m_data[i] = source.m_data[i];
      }
    else
      m_data = 0;
      }
  ~MyString()
  {
    //    delete [] m_data;
	  }

  MyString& operator=(const MyString & source){
    if (this == &source)
      return *this;

    //delete [] m_data;
    m_length = source.m_length;
    std::cout << "source length: " << m_length << std::endl;
    if (source.m_data){
      m_data = new char[m_length];
      for(int i=0; i < m_length; ++i)
        m_data[i] = source.m_data[i];
    }
    else
      m_data = 0;
    return *this;
  }

  char* getString() {return m_data;}
  int getLength() {return m_length;}
private:
  char *m_data;
  int m_length;
  };    


int main () {
  char* umbc = (char*)"Hello UMBC!";
  MyString hello(umbc);
  MyString candy = (char*)"";
  std::cout << "hello length: " << strlen(hello.getString()) << std::endl;
  MyString copy = hello;
  candy = hello;
  std::cout << "Hello = " << hello.getString() << std::endl;
  std::cout << "Copy = " << copy.getString() << std::endl;
  std::cout << "Candy = " << candy.getString() << std::endl;
  return 0;
}