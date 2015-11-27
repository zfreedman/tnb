#include <iostream>
using namespace std;

// Function template for multiple abstract types
template <class A, class B>
B smaller (A a, B b) {
  return a < b ? a : b;
}

int main () {
  cout << endl;

  int x = 89;
  double y = 56.78;
  cout << smaller(x, y) << endl;

  cout << endl;
  return 0;
}