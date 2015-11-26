#include <iostream>
using namespace std;

int tuna = 40;

int main () {
  int tuna = 20;
  // Use local tuna
  cout << tuna << endl;
  // Use global tuna
  // UNARY SCOPE RESOLUTION OPERATOR
  cout << ::tuna << endl;

  return 0;
}