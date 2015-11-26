#include <iostream>
#include "A.h"
using namespace std;

int main () {
  cout << endl;

  A a1(1);
  cout << "a1's num: " << a1.num << endl;
  A a2(2);
  cout << "a2's num: " << a2.num << endl;
  A a3;
  a3 = a1 + a2;
  cout << "a3's num: " << a3.num << endl;

  cout << endl;
  return 0;
}