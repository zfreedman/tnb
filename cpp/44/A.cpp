#include <iostream>
#include "A.h"
using namespace std;

A::A () {}

void A::printStuff () {
  cout << "i am a regular function\n";
}

void A::printStuffConst () const {
  cout << "i am the constant function\n";
}