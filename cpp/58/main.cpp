#include <iostream>
using namespace std;

// Function templates

template <class t>
t add(t a, t b) {
  return a + b;
}

int main () {
  cout << endl;
  
  cout << "int\n";
  int xi = 7;
  int yi = 8;
  cout << add(xi, yi) << endl;
  cout << "float\n";
  float xf = 7.2f;
  float yf = 8.5f;
  cout << add(xf, yf) << endl;

  cout << endl;
  return 0;
}