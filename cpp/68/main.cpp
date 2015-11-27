#include <iostream>
#include <fstream>
using namespace std;

// F: get what the user wants
int getWhatTheyWant ();

// F: main
int main () {
  cout << endl;

  // The user's choice
  int whatTheyWant;
  whatTheyWant = getWhatTheyWant();

  // Loop while the user's playing
  while (whatTheyWant != 4) {

    // Prompt user again
    whatTheyWant = getWhatTheyWant();
  }
  cout << "Goodbye!!!\n";
  cout << endl;
  return 0;
}

// F: get what the user wants
int getWhatTheyWant () {
  int choice;

  cout << "1: Get plain items\n";
  cout << "2: Get helpful items\n";
  cout << "3: Get harmful items\n";
  cout << "4: Get daEffOuttaHurr\n";
  cout << "Choice: ";

  cin >> choice;
  cout << "\n";
  return choice;
}