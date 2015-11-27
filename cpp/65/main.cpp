#include <iostream>
#include <fstream>
using namespace std;

int main () {

  ofstream f("godzillaFile.txt");

  // Check if file is ready/open
  if (f.is_open()) {
    cout << "okay the file is open...writing\n";
    f << "oi love the beef!\n";
  } else {
    cout << "could not write to the file...\n";
  }
  
  f.close();

  return 0;
}