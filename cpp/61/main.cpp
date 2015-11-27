#include <iostream>
using namespace std;

// Template specializations
template <class T>
class C {
  public:
    C (T t) {
      cout << t << " is not a char." << endl;
    }
};

template <>
class C<char> {
  public:
    C (char c) {
      cout << c << " is a char." << endl;
    }
};

int main () {
  cout << endl;

  C<int> ci(5);
  C<char> cch('a');

  cout << endl;
  return 0;
}