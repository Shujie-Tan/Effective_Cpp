#ifndef PERSON_H_
#define PERSON_H_

#include <memory>
#include <string>

#include "addrfwd.h"
#include "datefwd.h"

class Person {
 public:
  static std::shared_ptr<Person> create(const std::string& name,
                                        const Date& birthday,
                                        const Address& addr);
  virtual ~Person();
  virtual std::string name() const = 0;
  virtual std::string birthDate() const = 0;
  virtual std::string address() const = 0;
};

#endif  // PERSON_H_
