#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

int main () {
  cout << endl;

  Mother mom;
  cout << "Mother says: ";
  mom.sayName();

  Daughter daughter;
  cout << "Daughter says: ";
  daughter.sayName();

  cout << endl;
  return 0;
}