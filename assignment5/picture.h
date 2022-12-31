#include "shape.h"
class Picture {
private:
  /* data */
public:
  Shape *shapes[3];
  int current = -1;
  void AddShape(Shape *s) {
    current++;
    shapes[current] = s;
  }

  void moveShapes() {
    for (int index = 0; index < 3; index++) {
      shapes[index]->display_Shape();
    }
  }

  Picture(/* args */);
  ~Picture();
};

Picture::Picture(/* args */) {
}

Picture::~Picture() {
}
