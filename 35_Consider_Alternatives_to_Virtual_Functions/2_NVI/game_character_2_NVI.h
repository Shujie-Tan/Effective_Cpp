class GameCharacter {
 public:
  // 令客户通过public non-virtual成员函数间接调用private
  // virtual函数”，称为non-virtual interface（NVI）手法
  int healthValue() const {
    int retVal = doHealthValue();
    return retVal;
  }

 private:
  virtual int doHealthValue() const;
};
int GameCharacter::doHealthValue() const { return 3; }

/* 优点：
 * “事前工作”可以包括锁定互斥器（locking a
 * mutex）、制造运转日志记录项（logentry）、验证class约束条件、验证函数先决条件等等。
 * “事后工作”可以包括互斥器解除锁定（unlocking
 * a mutex）、验证函数的事后条件、再次验证class约束条件等等。*/
