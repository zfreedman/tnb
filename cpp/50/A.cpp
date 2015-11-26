#include <iostream>
#include "A.h"
using namespace std;

A::A () {}

A::A (int n) :
  num(n)
{}

A A::operator+ (A b) {
  A a;
  a.num = num + b.num;
  return a;
}