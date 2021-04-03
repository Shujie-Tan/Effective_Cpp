#ifndef PERSON_IMPL_
#define PERSON_IMPL_

#include <string>

#include "addrfwd.h"
#include "datefwd.h"

class PersonImpl {
 public:
  PersonImpl(const std::string& name, const Date& birthday,
             const Address& addr);
  std::string name;
  Date birthday;
  Address addr;
};

#endif  // PERSON_IMPL_