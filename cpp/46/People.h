#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "Birthday.h"
using namespace std;

class People {
  public:
    People (string n, Birthday b);
    void print ();
  private:
    string name;
    Birthday birthday;
};

#endif