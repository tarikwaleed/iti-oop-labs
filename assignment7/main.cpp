#include "../assignment2/fraction.h"
#include "child.h"
#include <iostream>
int pow(int x, int y) {
  if (y == 0)
    return 1;
  return x * pow(x, y - 1);
}

int main(int argc, char const *argv[]) {

  //   char name[] = "hello, world!";
  //   std::cout << name[4] << std::endl;
  //   std::cout << 4 [name] << std::endl;
  Fraction f(10, 20);
  std::cout << f[9] << std::endl;
  f[9] = 200;
  std::cout << f << std::endl;
  return 0;
}
