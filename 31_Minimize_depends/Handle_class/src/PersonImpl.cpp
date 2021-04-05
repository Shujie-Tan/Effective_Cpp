// 这里可以提供PeronImple 的更多实现，比如name内部用char[] 时可以转为std::string
// 等
#include "PersonImpl.h"

PersonImpl::PersonImpl(const std::string& name, const Date& birthday,
                       const Address& addr)
    : name(name), birthday(birthday), addr(addr) {}
