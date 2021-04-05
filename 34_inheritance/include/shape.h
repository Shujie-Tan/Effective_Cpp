#include <string>

class Shape {
 public:
  // =0与virtual结合使用，表示该函数是纯虚拟的。这意味着它必须被子类覆盖。
  // 包含纯虚拟函数的类有时被描述为抽象的，因为它们不能直接实例化。
  virtual void draw() const = 0;
  virtual void error(const std::string& msg);
  int objectID() const;
};

class Rectangle : public Shape {};

class Ellipse : public Shape {};

Shape* ps = new Shape;
Shape* ps1 = new Rectangle;
ps1->draw();
Shape* ps2 = new Ellipse;
ps2->draw();
ps1->Shape::draw();
ps2->Shape::draw();
