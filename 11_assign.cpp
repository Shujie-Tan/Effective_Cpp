/* Copyright 2021 Tan Shujie

*/
#include <vector>

typedef std::vector<int> Bitmap;

class Widget {
 private:
  Bitmap *pb;
 public:
  Widget(/* args */);
  ~Widget();
  Widget& operator=(const Widget& rhs);
  void swap(Widget &rhs);
};

Widget::Widget(/* args */) {}

Widget::~Widget() {}

Widget& Widget::operator=(const Widget& rhs) {
    // if (this == &rhs) {
    //     return *this;
    // }
    Bitmap *pOrig = pb;
    pb = new Bitmap(*rhs.pb);
    delete pOrig;
    // Widget temp(rhs);
    // swap(temp);
    return *this;
}