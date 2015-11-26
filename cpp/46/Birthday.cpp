#include "Birthday.h"
#include <iostream>
using namespace std;

// Constructor
Birthday::Birthday (int m, int d, int y) :
  month(m),
  day(d),
  year(y)
{}

// Print
void Birthday::print () {
  cout << month << " / " << day << " / " << year << endl;
}