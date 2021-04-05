class Airport {};

class Airplane {
 public:
  virtual void fly(const Airport& destination) = 0;
};

// 纯虚函数可以有自己的实现， 但是衍生类必须重新自己的实现
void Airplane::fly(const Airport& destination) {
  // 缺省行为
}

class ModelA : public Airplane {
 public:
  virtual void fly(const Airport& destination) {
    Airplane::fly(destination);
    // other
  }
};

class ModelC : public Airplane {
 public:
  virtual void fly(const Airport& destination);
};

void ModelC::fly(const Airport& destination) {
  // 将 C型飞机飞至指定的目的地
}