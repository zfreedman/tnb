#include <iostream>
#include "A.h"
using namespace std;

int main () {
  cout << endl;

  // Create instance
  A a0;
  a0.printCrap();

  // Create pointer to instance
  A *a1;
  // Arrow member selection operator
  a1->printCrap();

  cout << endl;
  return 0;
}