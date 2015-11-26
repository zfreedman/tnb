#include <iostream>
using namespace std;

int main () {
  int tuna[5] = {20, 54, 76, 832, 546};
  cout << "\nThe array: {";
  for (int i = 0; i < 5; ++i) {
    cout << tuna[i];
    if (i < 4) {
      cout << ", ";
    }
  }
  cout << "}\n";
  int sum = 0;
  for (int i = 0; i < 5; ++i) {
    sum += tuna[i];
  }
  cout << "The sum: " << sum << endl << endl;

  return 0;
}