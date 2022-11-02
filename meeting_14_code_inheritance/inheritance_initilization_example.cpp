#include <string>
using namespace std;
class Person {
public:
    Person(std::string name = "", int age = 0)
        : m_name(name), m_age(age ) {
    }
    string getName() { 
        return m_name; 
    }
    int getAge() { 
        return m_age; 
    }
private:
    std::string m_name;
    int m_age;
};
// BaseballPlayer publicly inheriting Person
class BaseballPlayer : public Person {
public:
    BaseballPlayer(string name = "", int age = 0,
        double battingAverage = 0.0, int homeRuns = 0)
        : Person(name, age), // call Person(string, int) to initialize these fields
            m_battingAverage(battingAverage), m_homeRuns(homeRuns)
    {}
    double getBattingAverage() const { return m_battingAverage; }
    int getHomeRuns() const { return m_homeRuns; }
private:
    double m_battingAverage;
    int m_homeRuns;
};