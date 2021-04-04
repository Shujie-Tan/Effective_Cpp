#ifndef ADDRFWD_H_
#define ADDRFWD_H_
#include <string>

class Address {
 private:
  std::string theAddress;

 public:
  explicit Address(const std::string& addr);
  ~Address();
  std::string addr() const;
};

#endif  // ADDRFWD_H_
