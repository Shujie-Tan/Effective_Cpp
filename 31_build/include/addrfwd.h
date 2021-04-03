#ifndef ADDRFWD_H_
#define ADDRFWD_H_
#include <string>

class Address {
 private:
  std::string addr;

 public:
  explicit Address(const std::string& addr);
  ~Address();
};

#endif  // ADDRFWD_H_
