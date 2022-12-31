class Shape {
private:
  /* data */
public:
  int dim1;
  int dim2;
  Shape();
  virtual void get_Area() = 0;
  virtual void display_Shape() = 0;
  ~Shape();
};
