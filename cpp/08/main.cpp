#include <iostream>

using namespace std;

int main () {
  int num;
  cout << "====Brought to you by Zach====\n";
  cout << "Welcome!!!" << endl;
  cout << "This program tells you if a number is even.\n";
  cout << "\nPlease enter a number: ";
  cin >> num;

  if (num % 2 == 0) {
    cout << "\nYour number IS even.\n\n";
  } else {
    cout << "\nYour number AINT even.\n";
  }
  cout << "====Brought to you by Zach====\n";
  return 0;
}