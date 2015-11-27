#include <iostream>
#include <string>
using namespace std;

int main () {
  cout << endl;

  string s;

  // Separates input by spaces
  // cin >> s;
  // cout << "the string i entered was: " << s << endl;

  // Separates input by newline
  getline(cin, s);
  cout << "the string i entered was: " << s << endl;


  // String constructor
  string s1("this is my string");
  string s2;
  string s3;

  // Copy string
  s2 = s1;
  s3.assign(s1);



  // Strings are arrays of characters
  string s4 ="barbeque";
  cout << "\nfirst 3 chars in " << s4 << endl;
  cout << s4[0] << ", " << s4[1] << ", " << s4[2] << endl;

  // Iterate
  for (int i = 0; i < s4.length(); ++i) {
    cout << s4[i] << "|";
  }
  cout << endl;
  cout << endl;
  return 0;
}