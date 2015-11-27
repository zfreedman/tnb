#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  cout << endl;

  ofstream f("players.txt");
  if (f.is_open()) {
    cout << "Build your character...\n";
    cout << "Enter your player ID, name, and money:\n";
    cout << "(press Ctrl+Z (win)/Ctrl+D (mac) to quit)\n" << endl;

    int id;
    string name;
    double money;

    while (cin >> id >> name >> money) {
      f << id << ", " << name << ", " << money << "\n";
    }
  }

  f.close();

  cout << endl;
  return 0;
}