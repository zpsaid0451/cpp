#include "Person.cpp"

class Professor: public Person{
public:
  string getDiscipline(){return m_discipline;}
  void setDiscipline(string disc){m_discipline = disc;}
private:
  string m_discipline;
};
