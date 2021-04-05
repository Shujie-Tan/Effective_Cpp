#include "addrfwd.h"

Address::Address(const std::string& addr) : theAddress(addr) {}
Address::~Address() {}
std::string Address::addr() const { return theAddress; }
