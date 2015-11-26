#include <iostream>
using namespace std;

int main () {
  cout << endl;
  
  int A[5];
  int size = sizeof(A)/sizeof(A[0]);
  for (int i = 0; i < size; ++i) {
    A[i] = i * i;
  }

  int *A_0 = &A[0];
  cout << "A[0] address: " << A_0 << endl;
  cout << "A[0] value: " << *A_0 << endl;

  cout << endl;
  for (int i = 0; i < size; ++i) {
    cout << "A[" << i << "] address: ";
    // Add i to indicate "i" elements from A_0
    cout << A_0 + i << endl;
    cout << "A[" << i << "] value: ";
    // Add i to indicate "i" elements from A_0
    cout << *(A_0 + i) << endl;
  }

  cout << endl;
  return 0;
}