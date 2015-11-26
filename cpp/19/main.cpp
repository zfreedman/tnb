#include <iostream>
using namespace std;

int main () {
  int count = 1;
  int sum = 0;
  int num = 0;
  cout << "This program sums 5 numbers...\n";
  while (count < 6) {
    cout << "Number " << count << ": ";
    cin >> num;
    sum += num;
    ++count;
  }
  cout << "Your sum is " << sum << endl;
}