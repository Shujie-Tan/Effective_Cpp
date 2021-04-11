#include <memory>
#include <mutex>
#include <thread>
#include <vector>

class Uncopyable {};

class Lock : private Uncopyable {
 private:
  std::shared_ptr<std::mutex> MutexPtr;

 public:
  explicit Lock(std::mutex* in_mutex);
  ~Lock();
};

Lock::Lock(std::mutex* p_mutex) : MutexPtr(p_mutex, std::mutex::unlock) {
  (*MutexPtr.get()).lock();
}

Lock::~Lock() {}

typedef std::vector<std::vector<int>> Image;

struct PMImpl {
  std::shared_ptr<Image> bgImage;
  int imageChanges;
};

class PrettyMenu {
 private:
  std::mutex pretty_mutex;
  std::shared_ptr<PMImpl> pImpl;

 public:
  void PrettyMenu::changeBackground(std::istream& imgSrc);
};

void PrettyMenu::changeBackground(std::istream& imgSrc) {
  using std::swap;
  std::lock_guard<std::mutex> lock(pretty_mutex);
  std::shared_ptr<PMImpl> pNew(new PMImpl(*pImpl));

  pNew->bgImage.reset(new Image(imgSrc));
  ++pNew->imageChanges;
  swap(pImpl, pNew);
}
