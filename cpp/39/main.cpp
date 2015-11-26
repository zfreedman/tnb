#include <iostream>
using namespace std;

void passByValue (int x);
void passByReference (int *x);

int main () {

  cout << endl;

  // Pass by value
    // Copy of the value is sent to function
  // Pass by reference
    // Give function direct access to variable

  // By value
  int betty = 13;
  cout << "betty (passed by value): " << betty << endl;
  passByValue(betty);
  cout << "betty (passed by value): " << betty << endl;

  // By reference
  int sandy = 23;
  cout << "sandy (passed by reference): " << sandy << endl;
  passByReference(&sandy);
  cout << "sandy (passed by reference): " << sandy << endl;

  cout << endl;

  return 0;
}

void passByValue (int x) {
  x = 99;
}

void passByReference (int *x) {
  *x = 66;
}