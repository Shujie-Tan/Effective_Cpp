#include <iostream>
#include <vector>
template <typename C>
void print2nd(const C& container) {
  if (container.size() >= 2) {
    typename C::const_iterator iter(container.begin());
    ++iter;
    // *iter = 3; // 不能改变所指物的内容
    std::cout << *iter << std::endl;
  }
}

template <typename C>
void f(const C& container, typename C::iterator iter);

// template <typename T>
// class Derived : public Base<T>::Nested {  // base class list中不允许
// “typename”
//  public:
//   explicit Derived(int x)
//       : Base<T>::Nested(
//             x) {  // mem.init.list 中不允许 "typename" 嵌套从属类型名称，
//     typename Base<T>::Nested temp;
//   }
// };

template <typename IterT>
void workWithIterator(IterT iter) {
  typedef typename std::iterator_traits<IterT>::value_type value_type;
  value_type temp(*iter);
  std::cout << temp << std::endl;
}

int main() {
  std::vector<int> a;
  a.push_back(9);
  a.push_back(10);
  print2nd<std::vector<int>>(a);

  workWithIterator<std::vector<int>::iterator>(a.begin());
}
