#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  cout << "I'm going to turn your number into 7...\n";
  int dir = 1;
  if (7 < num) {
    dir *= -1;
  } else if (7 == num) {
    cout << "Your number is already 7.\n";
    return 0;
  }

  cout << "Your number is: " << num << endl;
  while (num != 7) {
    num += dir;
    cout << "Your number is now: " << num << endl;
  }

  return 0;
}