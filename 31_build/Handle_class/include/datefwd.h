#ifndef DATEFWD_H_
#define DATEFWD_H_
class Date {
 private:
  int day;
  int month;
  int year;

 public:
  Date(const int day, const int month, const int year);
  ~Date();
  int day();
  int month();
  int year();
};

#endif  // DATEFWD_H_