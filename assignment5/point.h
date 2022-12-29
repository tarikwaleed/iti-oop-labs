class Point2D {
private:

public:
  int x;
  int y;
  Point2D(int x, int y) {
    setX(x);
    setY(y);
  }
  Point2D();
  ~Point2D();
  int getX() {
    return this->x;
  }
  int getY() {
    return y;
  }
  void setX(int x) {
    this->x = x;
  }
  void setY(int y) {
    this->y = y;
  }
};

Point2D::Point2D(/* args */) {
}

Point2D::~Point2D() {
}
