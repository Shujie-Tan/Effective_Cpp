class Airport {};
class Airplane {
 public:
  // 非纯虚函数， 衍生类可以继承缺省实现
  virtual void fly(const Airport& destination);
};

void Airplane::fly(const Airport& destination) {
  // 缺省代码， 将飞机飞至指定的目的地
}

class ModelA : public Airplane {};
class ModelB : public Airplane {};
class ModelC : public Airplane {};

Airport PDX();
Airplane* pa = new ModelC;
pa->fly(PDX);
