#include <iostream>
using namespace std;

int main () {
  int matrix[7][9];
  for (int i = 0; i < 7; ++i) {
    for (int j = 0; j < 9; ++j) {
      matrix[i][j] = 7 * i + j;
    }
  }
  
  for (int i = 0; i < 7; ++i) {
    cout << i << "   |{";
    for (int j = 0; j < 9; ++j) {
      cout << matrix[i][j];
      if (j < 8) {
        cout << ", ";
      }
    }
    cout << "}|   " << i << endl;
  }
}