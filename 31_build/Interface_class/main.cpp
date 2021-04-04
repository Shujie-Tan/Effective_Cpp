#include <RealPerson.h>

#include <iostream>
#include <string>

int main() {
  std::string name("Joshua");
  Date dateOfBirth(1, 1, 2001);
  std::string Country = "China";
  Address address(Country);
  std::shared_ptr<Person> pp(Person::create(name, dateOfBirth, address));
  std::cout << pp->name() << " was born on " << pp->birthDate()
            << " and now lives at " << pp->address() << std::endl;
}
