#include <iostream>
#include "include/datefwd.h"
#include "include/addrfwd.h"
#include "include/Person.h"

int main() {
  std::string name = "Joshua";
  Date date(26, 5, 2001);
  std::string Country = "China";
  Address addr(Country);
  Person person(name, date, addr);
  std::cout << person.name() << std::endl;
}
