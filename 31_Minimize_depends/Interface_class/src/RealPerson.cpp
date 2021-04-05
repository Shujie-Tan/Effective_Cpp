#include "RealPerson.h"

std::string RealPerson::name() const { return theName; }

std::string RealPerson::birthDate() const {
  std::string result =
      std::to_string(this->theBirthday.year()) + std::string("/") +
      std::to_string(this->theBirthday.month()) + std::string("/") +
      std::to_string(this->theBirthday.day());
  return result;
}

std::string RealPerson::address() const { return theAddress.addr(); }

std::shared_ptr<Person> Person::create(const std::string& name,
                                       const Date& birthday,
                                       const Address& addr) {
  return std::shared_ptr<Person>(new RealPerson(name, birthday, addr));
}

Person::~Person() {}
