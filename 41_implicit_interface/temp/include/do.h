template <typename T>
void doProcessing(T& w) {
  if (w.size() > 10 && w != nullptr) {
    T temp(w);
    temp.normalize();
    temp.swap(w);
  }
}