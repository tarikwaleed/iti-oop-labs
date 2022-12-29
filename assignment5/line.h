#include "math.h"
#include "point.h"
class Line {
private:
  Point2D pointA;
  Point2D pointB;

public:
  Line() {
    pointA = Point2D(10, 20);
    pointB = Point2D(5, 6);
  }
  int getLength() {
    // return sqrt(pow(pointB.x - pointA.x, 2) + pow(pointB.y - pointA.y, 2) * 1.0);
    return sqrt(pow(pointB.x - pointA.x, 2) + pow(pointB.y - pointA.y, 2));
  }
};
