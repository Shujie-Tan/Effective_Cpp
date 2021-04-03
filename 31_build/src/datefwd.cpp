#include "datefwd.h"

Date::Date(const int day, const int month, const int year)
    : day(day), month(month), year(year) {}
Date::~Date() {}

int Date::getDay() { return day; }
int Date::getMonth() { return month; }
int Date::getYear() { return year; }
