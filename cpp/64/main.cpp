#include <iostream>
#include <fstream>
using namespace std;

int main () {

  // File object
  ofstream myFile;
  // Open
  myFile.open("pico.txt");
  // Write
  myFile << "hey there pico!!\n";
  myFile << "goodbye!\n";
  // Close
  myFile.close();
  return 0;
}