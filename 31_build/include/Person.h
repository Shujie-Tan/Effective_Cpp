// Person声明
#ifndef PERSON_H_
#define PERSON_H_
#include <memory>
#include <string>

#include "PersonImpl.h"
#include "addrfwd.h"
#include "datefwd.h"  // 声明但没有定义 class Date;

// class PersonImpl;
// class Date;
// class Address;
// Date today();

void clearAppointments(Date d);

class Person {
 public:
  Person(const std::string& name, const Date& birthday, const Address& addr);
  std::string name() const;
  std::string birthDate() const;
  std::string address() const;

 private:
  std::shared_ptr<PersonImpl> pImpl;
};

#endif  // PERSON_H_
