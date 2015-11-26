#include <iostream>
using namespace std;

void printNumber (int x) {
  cout << "i am printing an int: " << x << endl;
}
void printNumber (float x) {
  cout << "i am printing an float: " << x << endl;
}

int main () {
  int a = 54;
  float b = 32.4f;

  printNumber(a);
  printNumber(b);
}