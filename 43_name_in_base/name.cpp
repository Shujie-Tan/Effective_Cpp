#include <iostream>
#include <string>

class CompanyA {
 public:
  void sendCleartext(const std::string& msg) const {
    std::cout << msg << std::endl;
  }
  void sendCrypted(const std::string& msg);
};

class CompanyB {
 public:
  void sendCleartext(const std::string& msg);
  void sendCrypted(const std::string& msg);
};

class CompanyZ {
 public:
  void sendCleartext(const std::string& msg);
  void sendCrypted(const std::string& msg);
};

class MsgInfo {
 private:
  std::string msg = "this is a message";

 public:
  std::string getMsg() const { return msg; }
};

// templatized base classes
template <typename Company>
class MsgSender {
 public:
  void sendClear(const MsgInfo& info) {
    std::string msg = info.getMsg();
    Company c;
    c.sendCleartext(msg);
  }
  void sendSecret(const MsgInfo& info) {}
};

template <>  // 全特化的
class MsgSender<CompanyZ> {
 public:
  void sendSecret(const MsgInfo& info) {}
};

template <typename Company>
class LoggingMsgSender : public MsgSender<Company> {
 public:
  using MsgSender<Company>::sendClear;  // method 2

  void sendClearMsg(const MsgInfo& info) {
    std::cout << "将传送前的信息写至log" << std::endl;
    sendClear(info);
    // method 1: this->sendClear(info);
    // method 3: MsgSender<Company>::sendClear(info);
    // 最不让人满意的一个解法，因为如果被调用的是virtual函数，上述的明确资格修饰（explicit
    // qualification）会关闭“virtual绑定行为”。
    std::cout << "将传送后的信息写至log" << std::endl;
  }
};

int main() {
  LoggingMsgSender<CompanyA> sender;
  MsgInfo info;
  sender.sendClearMsg(info);

  LoggingMsgSender<CompanyZ> zMsgsender;
  MsgInfo msgData;
  zMsgsender.sendClearMsg(msgData);  // 无法通过编译
}
