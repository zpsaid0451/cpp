#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <class T>
class Stack{
public:
  void Push(T const&);
  void Pop();
  T Top() const;
  bool IsEmpty() const;
  void Display();
private:
  vector<T> m_elems;
};

template <class T>
void Stack<T>::Push(T const& elem){
  m_elems.push_back(elem);
}

template <class T>
void Stack<T>::Pop(){
  if(IsEmpty()){
    throw out_of_range("Stack<T>::Pop() : Empty Stack" );
  }
  m_elems.pop_back();
}

template <class T>
T Stack<T>::Top() const{
  if(IsEmpty()){
    throw out_of_range("Stack<T>::Top : Empty Stack");
  }
  return m_elems.back();
}

template<class T>
void Stack<T>::Display(){
  for(unsigned int i = 0; i < m_elems.size(); i++){
    cout << m_elems.at(i) << endl;
  }
}

template <class T>
bool Stack<T>::IsEmpty() const{
  return m_elems.empty();
}

int main () {
  try{
    Stack<int> intStack;
    intStack.Push(7);
    intStack.Push(10);
    intStack.Display();
    intStack.Pop();
    intStack.Pop();
    intStack.Display();

    Stack<string> stringStack;
    stringStack.Push("Hello");
    stringStack.Push("Candy");
    cout << stringStack.Top() << endl;

  }catch(exception const& ex){
    cerr << "Exception: " << ex.what() << endl;
    return -1;
  }
  return 0;
}