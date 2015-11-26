#include <iostream>
using namespace std;

void printArray (int arr[], int size);

int main () {
  cout << endl;

  int a[3] = {3, 6, 9};
  int b[5] = {2, 4, 6, 8, 10};

  printArray(a, 3);
  printArray(b, 5);

  cout << endl;

  return 0;
}

void printArray (int arr[], int size) {
  cout << "{";
  for (int i = 0; i < size; ++i) {
    cout << arr[i];
    if (i < size - 1) {
      cout << ", ";
    }
  }
  cout << "}\n";
}