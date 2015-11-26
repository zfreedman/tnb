#include <iostream>
#include "A.h"
using namespace std;

A::A (int x) :
  xx(x)
{}

void A::print () {
  cout << "xx: " << xx << endl;
  cout << "this->xx: " << this->xx << endl;
  cout << "(*this).xx: " << (*this).xx << endl;
}