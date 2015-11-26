#include <iostream>
using namespace std;

int main () {
  int ageCount = 0;
  int totalAge = 0;
  int currAge = 0;
  cout << "This program computes the average of all ages entered.\n";

  while (currAge != -1) {
    cout << "Enter an age (-1 to quit): ";
    cin >> currAge;
    if (currAge != -1) {
      totalAge += currAge;
      ++ageCount;
    }
  }

  cout << "Age total: " << totalAge << endl;
  cout << "Age count: " << ageCount << endl;
  if (ageCount != 0) {
    cout << "Age average: " << totalAge / ageCount;
  } else {
    cout << "Age average: " << 0 << " (nice try)";
  }
  cout << endl;
  return 0;
}