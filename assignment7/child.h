#include "parent.h"
#include <iostream>
class Child : private Parent {
private:
  int child_Private_Member;

public:
  void public_Getter() {
    std::cout << this->child_Private_Member<<std::endl;
    std::cout<<this->parent_Protected_Member<<std::endl;
    std::cout<<this->parent_Public_Member<<std::endl;

  }
  int child_Public_Member;
  // cout operator overloading
  /*
  returns: ostream& - a refrence of the type ostream
  takes: ostream& as the left operand, Child& as the right operand
  cout<<Child;
  */
  friend std::ostream &operator<<(std::ostream &stream, const Child &child);
  // cin operator overloading
  friend std::istream &operator>>(std::istream &stream, Child &child);
  Child(int, int, int);
  ~Child();

protected:
  int child_Protected_Member;
};

// TODO: play with default parameters
Child::Child(int x = 10, int y = 10, int z = 10) {
  // you won't be able to access the parent private members
  // Parent::parent_Private_Member = x;
  Parent::parent_Public_Member = y;
  Parent::parent_Protected_Member = z;
  Child::child_Private_Member = 5;
  Child::child_Public_Member = 10;
  Child::child_Protected_Member = 15;
}

Child::~Child() {
}
// overload for the << function in the cout object
// to make it takes an object from child as a left operand
std::ostream &operator<<(std::ostream &stream, const Child &child) {
  std::cout << child.child_Public_Member;
  return stream;
}
std::istream &operator>>(std::istream &stream, Child &child) {
  // a friend function can only access the private members in the class
  // but not the private members inherited from above
  // stream >> child.parent_Private_Member;
  std::cout << "Enter Parent Public Member" << std::endl;
  stream >> child.parent_Public_Member;
  std::cout << "Enter Parent Protected Member" << std::endl;
  stream >> child.parent_Protected_Member;
  std::cout << "Enter Child Private Member" << std::endl;
  stream >> child.child_Private_Member;
  std::cout << "Enter Child Public Member" << std::endl;
  stream >> child.child_Public_Member;
  std::cout << "Enter Child Public Member" << std::endl;
  stream >> child.child_Protected_Member;
  return stream;
}
