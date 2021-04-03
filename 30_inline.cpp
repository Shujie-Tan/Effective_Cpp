/* Copyright 2021 Tan Shujie

*/
#include <vector>

class Person {
 private:
  int theAge;

 public:
  Person(/* args */);
  ~Person();
  int age() const { return theAge; }
};

Person::Person(/* args */) {}

Person::~Person() {}
