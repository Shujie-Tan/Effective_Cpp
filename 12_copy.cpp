/* Copyright 2021 Tan Shujie

*/
#include <string>
#include <vector>

void logCall(const std::string &funcName);
class Customer {
private:
  std::string name;
  Date lastTransaction;
public:
  Customer(const Customer &rhs);
  Customer &operator=(const Customer &rhs);
  ~Customer();
};

Customer::Customer(const Customer &rhs) : name(rhs.name) {
  logCall("Customer copy constructor");
}

Customer& Customer::operator=(const Customer &rhs) {
  logCall("Customer copy assignment constructor");
  name = rhs.name;
  return *this;
}

Customer::~Customer() {}
