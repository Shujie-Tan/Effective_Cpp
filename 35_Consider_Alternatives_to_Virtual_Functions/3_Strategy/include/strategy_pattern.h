class GameCharacter;

int defaultHealCalc(const GameCharacter& gc);

class GameCharacter {
 public:
  typedef int (*HealthCalcFunc)(const GameCharacter&);
  explicit GameCharacter(HealthCalcFunc hcf = defaultHealCalc)
      : healthFunc(hcf) {}
  int healthValue() const { return healthFunc(*this); }

 private:
  HealthCalcFunc healthFunc;
};
