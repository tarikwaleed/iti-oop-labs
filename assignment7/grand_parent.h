
class GrandParent {
private:
  int grandpa_Private_Member;

public:
  int grandpa_Public_Member;
  GrandParent(/* args */);
  ~GrandParent();

protected:
  int grandpa_Protected_Member;
};

GrandParent::GrandParent(/* args */) {
}

GrandParent::~GrandParent() {
}
