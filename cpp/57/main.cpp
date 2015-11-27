#include <iostream>
using namespace std;

class Enemy {
  public:
    // virtual void attack () {
    //   cout << "i am the enemy class's attack" << endl;
    // };
    virtual void attack () = 0;

    // An abstract class is a class with a pure virtual
    // function
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