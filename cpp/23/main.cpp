#include <iostream>
#include <cmath>
using namespace std;

int main () {
  float initialValue;
  float growthRate;
  int days;

  cout << endl;

  cout << "This program computes growth on a stock investment.";
  cout << "Enter the number of days to hold an investment: ";
  cin >> days;
  cout << "Enter the initial investment: ";
  cin >> initialValue;
  cout << "Enter the growth rate: ";
  cin >> growthRate;

  for (int i = 0; i < days; ++i) {
    cout << "On day " << i << ", your investment's value is ";
    cout << "$" << initialValue * pow(1 + growthRate, i) << endl;
  }
  cout << endl;
}