#include <iostream>
using namespace std;

// Throwing exceptions
// Try blocks

int main () {
  cout << endl;

  try {
    int momsAge = 30;
    int sonsAge = 34;

    if (momsAge < sonsAge) {
      // throw /*Whatever error number you want*/
      throw 99;
    }
  } catch (int i) {
    cout << "ERROR #" << i << ":\n";
    cout << "The son cannot be older than mom\n";
  }

  cout << endl;
  return 0;
}