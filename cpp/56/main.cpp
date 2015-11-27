#include <iostream>
using namespace std;

class Enemy {
  public:
    // Pure virtual attack function
    // Look in specific class instead of using
    // this base class's attack function
    virtual void attack () {};
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