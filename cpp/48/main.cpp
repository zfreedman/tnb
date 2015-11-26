#include <iostream>
#include <string>
using namespace std;

class A {
  public:
    A () {
      name = "aIsMyName";
    }

    void printName () {
      cout << "My name is " << name << endl;
    }
  private:
    string name;

  friend void aFriend (A &a);
};

void aFriend (A &a) {
  a.name = "AiSmYnAME";
  cout << "Changed a's name: " << a.name << endl;
}

int main () {
  cout << endl;

  A abe;
  abe.printName();
  aFriend(abe);
  cout << endl;
  return 0;
}