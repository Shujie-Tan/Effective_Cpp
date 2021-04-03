// Person 实现

#include "Person.h"

#include "PersonImpl.h"
// 接下来要用到PersonImpl的定义

Person::Person(const std::string& name, const Date& birthDate,
               const Address& addr)
    : pImpl(new PersonImpl(name, birthDate, addr)) {}

std::string Person::name() const { return pImpl->name; }
