#include "rectangle.h"
class Square : public Rectangle {
private:
  /* data */
public:
  Square(/* args */);
  ~Square();
  void display_Shape(){};
};

Square::Square(/* args */) {
}

Square::~Square() {
}
void Square::display_Shape() {
  std::cout << "this is a square" << std::endl;
}
