#include <iostream>
#include "A.h"
using namespace std;

int main () {
  cout << endl;

  A a;
  cout << "did that get constructed?\n";
  // (&a)->~A();
  // cout << "did that get destroyed?\n";
  cout << endl;
  return 0;
}