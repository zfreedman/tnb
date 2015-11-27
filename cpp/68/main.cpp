#include <iostream>
#include <fstream>
using namespace std;

// F: get what the user wants
int getWhatTheyWant ();

// F: print the specified items
void displayItems (int i);

// F: main
int main () {
  cout << endl;

  // The user's choice
  int whatTheyWant;
  whatTheyWant = getWhatTheyWant();

  // Loop while the user's playing
  while (whatTheyWant != 4) {

    // Switch
    if (whatTheyWant != 4) {
      if (0 < whatTheyWant && whatTheyWant < 4) {
        displayItems(whatTheyWant);
      }
      // Prompt user
      whatTheyWant = getWhatTheyWant();
    }
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

// F: print the specified items
void displayItems (int i) {
  ifstream f("objects.txt");
  string name;
  double power;

  if (i == 1) {
    while (f >> name >> power) {
      if (power == 0) {
        cout << "Name: " << name << ", Power: " << power << endl;
      }
    }
  } else if (i == 2) {
    while (f >> name >> power) {
      if (power > 0) {
        cout << "Name: " << name << ", Power: " << power << endl;
      }
    }
  } else if (i == 3) {
    while (f >> name >> power) {
      if (power < 0) {
        cout << "Name: " << name << ", Power: " << power << endl;
      }
    }
  }
  f.close();
}