#include <iostream>
#include "People.h"
#include "Birthday.h"
using namespace std;

int main () {
  cout << endl;

  Birthday b(4, 30, 1992);

  People zach("Zach", b);
  zach.print();

  cout << endl;
  return 0;
}