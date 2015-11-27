#include <iostream>
#include <string>
using namespace std;

int main () {
  cout << endl;

  // Substring
  string s0("OMG i think i am fish");
  cout << s0.substr(4, s0.length() - 4) << "\n\n";


  // Swap
  string s1("apples");
  string s2("bananas");

  cout << "s1: " << s1 << "\ns2: " << s2 << endl;
  cout << "\n...swap time...\n\n";
  s1.swap(s2);
  cout << "s1: " << s1 << "\ns2: " << s2 << endl;


  // Find
  string s5 = "ham is spam oh yes i am!";
  // Search -->
  cout << s5.find("am") << endl;
  // Search <--
  cout << s5.rfind("am") << endl;



  cout << endl;
  return 0;
}