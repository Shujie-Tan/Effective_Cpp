#include <new>

#include <iostream>

/*
namespace std {
    typedef void (*new_handler)();
    new_handler set_new_hander(new_handler p) throw();
}
*/

void outOfMem() {
  std::cerr << "Unable to satisfy request for memory\n";
  std::abort();
}

int main() {
  std::set_new_handler(outOfMem);
  int* pBigDataArray = new int(10000000L);
}