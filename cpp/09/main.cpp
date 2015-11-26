#include <iostream>

using namespace std;

// Function prototyping of greetUser
void greetUser(int number);

int main () {
  int number;
  cout << "Enter a number: ";
  cin >> number;
  greetUser(number);
  return 0; 
}

void greetUser (int number) {
  cout << "Hello " << number << ".\n";
}