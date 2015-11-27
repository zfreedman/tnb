#include <iostream>
using namespace std;

int main () {
  cout << endl;

  try {

    int num1;
    cout << "Number 1: ";
    cin >> num1;

    int num2;
    cout << "Number 2: ";
    cin >> num2;

    cout << num1 << " / " << num2 << " = ";
    if (num2 == 0) {
      throw 0;
    }

    cout << num1 / num2 << endl;

  // } catch (int i) {
  //   cout << "\nERROR #" << i << ":\n";
  //   if (i == 0) {
  //     cout << "Cannot divide by 0.\n";
  //   }
  // }
  } catch (...) {
    cout << "\nI don't know what you did, but you broke something.\n";
  }

  cout << endl;
  return 0;
}