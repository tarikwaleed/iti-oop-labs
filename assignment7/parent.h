#include"grand_parent.h"
class Parent:public GrandParent {
private:
  int parent_Private_Member;

public:
  int parent_Public_Member;
  Parent(/* args */);
  ~Parent();

protected:
  int parent_Protected_Member;
};

Parent::Parent(/* args */) {
}

Parent::~Parent() {
}
