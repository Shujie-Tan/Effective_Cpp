#include <iostream>
#include <new>

#include "widget.h"

void outOfMem() {
  std::cerr << "Unable to satisfy request for memory\n";
  std::abort();
}

int main() {
  Widget::set_new_handler(outOfMem);

  Widget* pw1 = new Widget;
  std::string* ps = new std::string;

  Widget::set_new_handler(0);  // 设定Widge专属的 new-handling 函数为null
  Widget* pw2 = new Widget;
}