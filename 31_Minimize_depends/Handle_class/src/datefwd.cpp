#include "datefwd.h"

Date::Date(const int day, const int month, const int year)
    : theDay(day), theMonth(month), theYear(year) {}
Date::~Date() {}

int Date::day() const { return theDay; }
int Date::month() const { return theMonth; }
int Date::year() const { return theYear; }
