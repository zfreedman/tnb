#include <iostream>
#include <string>
using namespace std;

int main () {
  cout << endl;

  string s1 = "hi my name is bucky and i love bacon and ham";

  // Erase
  cout << s1 << endl;
  s1.erase(20);
  cout << "Erased...\n";
  cout << s1 << endl;

  // Replace
  s1.replace(14, 5, "zach jack wack");
  cout << "Replaced...\n";
  cout << s1 << endl;

  // Insert
  s1.insert(14, "not ");
  cout << "Inserted...\n";
  cout << s1 << endl;

  cout << endl;
  return 0;
}