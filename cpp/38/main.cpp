#include <iostream>
using namespace std;

int main () {
  cout << endl;
  int fish = 5;
  // Retrieve memory address of fish: &fish
  cout << &fish << "\n\n";

  // Pointer
  int *fishPointer = &fish;
  cout << "The address of fish: " << fishPointer << endl;
  cout << "The value at the address: " << *fishPointer << endl;
  cout << endl;

  return 0;
}