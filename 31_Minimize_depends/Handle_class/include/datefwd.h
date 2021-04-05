#ifndef DATEFWD_H_
#define DATEFWD_H_
class Date {
 private:
  int theDay;
  int theMonth;
  int theYear;

 public:
  Date(const int day, const int month, const int year);
  ~Date();
  int day() const;
  int month() const;
  int year() const;
};

#endif  // DATEFWD_H_
