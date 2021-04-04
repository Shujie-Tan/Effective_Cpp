#include "addrfwd.h"

Address::Address(const std::string& addr) : theAddr(addr) {}
Address::~Address() {}

std::string Address::addr() const { return theAddr; }
