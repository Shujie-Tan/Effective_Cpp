#include <new>
#include "new_handler_holder.h"

class Widget {
 public:
  static std::new_handler set_new_handler(std::new_handler p) throw();
  static void* operator new(std::size_t size) throw(std::bad_alloc);

 private:
  static std::new_handler currentHandler;
};

std::new_handler Widget::currentHandler = 0;

// 重载set_new_handler， 我的理解
std::new_handler Widget::set_new_handler(std::new_handler p) throw() {
  std::new_handler oldHandler = currentHandler;
  currentHandler = p;
  return oldHandler;
}

// 重载 new
void* Widget::operator new(std::size_t size) throw(std::bad_alloc) {
  // 目的是构造h时 new_handler 变为 currentHandler,
  //  析构h时 new_handler 变为原来的handler
  NewHandlerHolder h(std::set_new_handler(currentHandler));
  return ::operator new(size);
}