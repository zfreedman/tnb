#include <iostream>
using namespace std;

class Enemy {
  public:
    void setAttackPower (int p) {
      attackPower = p;
    }
  protected:
    int attackPower;
};

class Ninja : public Enemy {
  public:
    void attack () {
      cout << "i am a ninja, ninja chop! -" << attackPower << endl;
    }
};

class Monster : public Enemy {
  public:
    void attack () {
      cout << "monster must eat you!!! -" << attackPower << endl;
    }
};

int main () {
  cout << endl;

  // Ninja
  Ninja ninja;
  Enemy *enemyNinja = &ninja;

  // Monster
  Monster monster;
  Enemy *enemyMonster = &monster;

  // Set attack power
  enemyNinja->setAttackPower(3);
  enemyMonster->setAttackPower(22);

  // Attack
  ninja.attack();
  monster.attack();

  cout << endl;
  return 0;
}