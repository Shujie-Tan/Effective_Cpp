#include <boost/scoped_array.hpp>
#include <iostream>

// template <typename T, std::size_t n>
// class SquareMatrix {
//  public:
//   void invert();
// };

template <typename T>
class SquareMatrixBase {
 protected:
  SquareMatrixBase(std::size_t n, T* pMem) : size(n), pData(pMem) {}
  void setDataPtr(T* ptr) { pData = ptr; }
  // void invert(std::size_t matrixSize);
 private:
  std::size_t size;
  T* pData;
};

/*
template <typename T, std::size_t n>
class SquareMatrix : private SquareMatrixBase<T> {
 public:
  // 送出矩阵大小和数据指针给base class
  SquareMatrix() : SquareMatrixBase<T>(n, data) {}

 private:
  T data(n* n);
}
*/

template <typename T, std::size_t n>
class SquareMatrix : private SquareMatrixBase<T> {
 public:
  SquareMatrix() : SquareMatrixBase<T>(n, 0), pData(new T(n * n)) {
    this->setDataPtr(pData.get());
  }

 private:
  boost::scoped_array<T> pData;
}

// template <typename T, std::size_t n>
// class SquareMatrix : private SquareMatrixBase<T> {
//  private:
//   using SquareMatrixBase<T>::invert;

//  public:
//   void invert() { this->invert(n); }
// };

int main() {
  std::cout << "Square" << std::endl;
}