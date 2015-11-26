#include <iostream>
#include <string>
using namespace std;

class ZachClass {
  public:
    void sayHi () {
      cout << "Hi!!!!\n";
    }
    void sayAge () {
      cout << "My age is " << age << endl;
    }
    void sayName () {
      cout << "My name is " << name << endl;
    }

    void setAge (int a) {
      age = a;
    }
    int getAge () {
      return age;
    }

    void setName (string n) {
      name = n;
    }
    string getName () {
      return name;
    }

  private:
    int age;
    string name;
};

int main () {
  ZachClass zach;
  zach.sayHi();
  zach.sayAge();
  zach.setAge(24);
  zach.sayAge();
  zach.setName("Zach");
  zach.sayName();
  zach.setName("Mike");
  zach.sayName();
  return 0;
}