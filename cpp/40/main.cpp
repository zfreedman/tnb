#include <iostream>
using namespace std;

int main () {
  cout << endl;

  // Size of a variable in bytes
  cout << "Primitive sizes...\n";
  char c;
  cout << "Size of char: " << sizeof(c) << " byte(s)\n";
  int i;
  cout << "Size of int: " << sizeof(i) << " byte(s)\n";
  float f;
  cout << "Size of float: " << sizeof(f) << "byte(s)\n";
  double d;
  cout << "Size of double: " << sizeof(d) << " byte(s)\n";

  // Array sizes
  cout << endl;
  cout << "Non-primitive sizes...\n";
  int intArr[10];
  cout << "Size of int[]: " << sizeof(intArr) << " byte(s)\n";
  int intArrSize = sizeof(intArr) / sizeof(intArr[0]);
  cout << "intArr has space for " << intArrSize << " int(s).\n";

  cout << endl;

  return 0;
}