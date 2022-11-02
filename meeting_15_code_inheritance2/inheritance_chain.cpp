#include <iostream>
#include <string>
using namespace std;

class Instrument {
public:
  Instrument(string name) {
    cout << "Instrument: " << name << endl;
    m_name = name;
  }
private:
  string m_name;
};

class Woodwind: public Instrument {
public:
  Woodwind(string name, int numReeds )
    : Instrument(name) {
    cout << "Woodwind: " << name  << endl;
  }
private:
  int m_numReeds;
};

class Oboe: public Woodwind {
public:
  Oboe(string name, int numReeds, string type)
    : Woodwind(name, numReeds) {
    cout << "Oboe: " << name << endl;
  }
private:
  string m_type; //treble or soprano
};

int main() {
  Oboe myOboe("Schiller", 2, "soprano");

  return 0;
}