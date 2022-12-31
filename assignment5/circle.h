#include "shape.h"
#include <iostream>
#define pi 3.14159
class Circle : public Shape {
private:
  /* data */
public:
  Circle(/* args */);
  ~Circle();
  double get_Area(double) {
    
  }
  void display_Shape(){};
};

Circle::Circle(/* args */) {
}

Circle::~Circle() {
}

double Circle::get_Area(double radius) {
  return pi * radius * radius;
}
void Circle::display_Shape(){
  std::cout << "this is a circle" << std::endl;
}