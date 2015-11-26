#include <iostream>
using namespace std;

int main () {
  cout << "(Element, Value)" << endl;
  int arr[9];

  for (int i = 0; i < 9; ++i) {
    arr[i] = i + 10;
    cout << "(" << i << ", " << arr[i] << ")" << endl;
  }

  cout << endl;

  return 0;
}