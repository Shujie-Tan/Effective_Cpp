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
  int getDay();
  int getMonth();
  int getYear();
};

#endif  // DATEFWD_H_
