#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  cout << endl;

  // ofstream is for outputting data

  // reading data in from a file, use ifstream
  ifstream f("players.txt");
  if (f.is_open()) {
    int id;
    string name;
    double money;

    while (f >> id >> name >> money) {
      cout << id << ", " << name << ", " << money << "\n";
    }

    // When f reaches EOF, the deconstructor reaches
    // a null pointer, and closes the file for us
    // f.close();

  } else {
    cout << "Could not open \"players.txt\"\n";
  }


  cout << endl;
  return 0;
}