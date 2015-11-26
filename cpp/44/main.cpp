#include <iostream>
#include "A.h"
using namespace std;

int main () {
  cout << endl;

  const int x = 3;
  // Constant objects need constant functions

  A a;
  a.printStuff();

  const A aConst;
  aConst.printStuffConst();

  cout << endl;
  return 0;
}