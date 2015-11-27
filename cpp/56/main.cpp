#include <iostream>
using namespace std;

class Enemy {
  public:
    // Virtual attack function
    // Look in specific class instead of using
    // this base class's attack function
    virtual void attack () {};
    // Pure virtual
    // Objects with pure virtual functions cannot
    // be instantiated, however the derived class can be
    // virtual void attack () = 0;
};

class Ninja : public Enemy {
  public:
    void attack () {
      cout << "ninja attack!" << endl;
    }
};

class Monster : public Enemy {
  public:
    void attack () {
      cout << "monster attack!" << endl;
    }
};

int main () {
  cout << endl;

  // Make instances
  Ninja n;
  Monster m;

  // Setup pointers
  Enemy *ninja = &n;
  Enemy *monster = &m;

  // Attack
  ninja->attack();
  monster->attack();

  cout << endl;
  return 0;
}