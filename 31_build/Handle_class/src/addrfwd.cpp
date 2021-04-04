#include "addrfwd.h"

Address::Address(const std::string& addr) : addr(addr) {}
Address::~Address() {}

std::string Address::addr() const { return addr; }
