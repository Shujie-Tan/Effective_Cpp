
class Airplane {
 public:
  virtual void fly(const Airport& destination) = 0;

 protected:
  void defaultFly(const Airport& destination);
};

void Airplane::defaultFly(const Airport& destination) {
  // 缺省行为
}

class ModelA : public Airplane {
 public:
  virtual void fly(const Airport& destination) {
    defaultFly(destination);
    // other
  }
};
