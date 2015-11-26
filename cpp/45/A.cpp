#include <iostream>
#include "A.h"
using namespace std;

// Initializer list instantiation
A::A (int a, int b)
: regVar(a),
constVar(b) {}

void A::print () {
  cout << "regVar: " << regVar;
  cout << "\nconstVar: " << constVar << endl;
}