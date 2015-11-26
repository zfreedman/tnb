#include <iostream>
#include "People.h"
#include "Birthday.h"
using namespace std;

// Constructor
People::People (string n, Birthday b) :
  name(n),
  birthday(b)
{}

// Print
void People::print () {
  cout << "Name: " << name;
  cout << "\nBirthday: ";
  birthday.print();
}