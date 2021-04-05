#include <string>

#include "Person.h"
#include "addrfwd.h"
#include "datefwd.h"

class RealPerson : public Person {
 private:
  std::string theName;
  Date theBirthday;
  Address theAddress;

 public:
  RealPerson(const std::string& name, const Date& birthday, const Address& addr)
      : theName(name), theBirthday(birthday), theAddress(addr) {}
  ~RealPerson() {}
  std::string name() const;
  std::string birthDate() const;
  std::string address() const;
};
