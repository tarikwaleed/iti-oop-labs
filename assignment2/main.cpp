#include "fraction.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  // two ways of object creattion in c++
  Fraction f2(1, 2);
  Fraction f4=f2+5;
  f4.Display();
  Fraction f5=5+f4;

  



  return 0;
}
