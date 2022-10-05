
// Laptop class must have 4 private variables:
// o m_brand (string)
// o m_price (double)
// o m_memory (int)
// o m_isBacklit (bool)
// ● Declare public getter (accessors) and setter (mutators) functions for the
// above four variables.
// o Conceptually, a getter returns a private variable, while a setter
// sets a private variable.

// ● Declare a public function bool WorthIt();
#ifndef LAPTOP_H //Protects against multiple inclusion
#define LAPTOP_H //Protects against multiple inclusion

#include <iostream>
#include <string>

using namespace std;



class Laptop {
public:
    string GetBrand();
    double GetPrice();
    int GetMemory();
    bool GetIsBacklit();

    void SetBrand(string brand);
    void SetPrice(double price);
    void SetMemory(int memory);
    void SetBacklit(bool isBacklit);

  Laptop();
  bool WorthIt();

private:
  string m_brand;
  double m_price;
  int m_memory;
  bool m_isBacklit;
};
#endif
