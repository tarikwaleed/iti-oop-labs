#include<iostream>
#include "shape.h"
class Rectangle : public Shape {
private:
  /* data */
public:
  Rectangle(/* args */);
  ~Rectangle();
  double get_Area(double, double);
  void display_Shape() {
  }
};

Rectangle::Rectangle(/* args */) {
}

Rectangle::~Rectangle() {
}
double Rectangle::get_Area(double width, double lenght) {
  return width * lenght;
}
void Rectangle::display_Shape() {
  std::cout << "this is a rectangle" << std::endl;
}
