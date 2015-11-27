#include <iostream>
using namespace std;

template <class T>
class MyClass {
  T first;
  T second;
  public:
    MyClass (T a, T b) {
      first = a;
      second = b;
    }
    T bigger ();
};

template <class T>
T MyClass<T>::bigger () {
  return first < second ? second : first;
}

int main () {
  cout << endl;

  MyClass<int> c(25, 34);
  cout << c.bigger() << endl;
  
  cout << endl;
  return 0;
}