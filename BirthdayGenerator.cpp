#include "BirthdayGenerator.h"
#include "RandomIntegerGenerator.h"

#define MAX_AGE 118

Date BirthdayGenerator::next(int year) {
    auto intGen = RandomIntegerGenerator::instance();
    int month = intGen->next(1, 12);
   
    int maxDaysInMonth[] = { -1,
        31, 28, 31, 30, 31, 30, 31,
        31, 30, 31, 30, 31
    };

    if (Date::isLeapYear(year)) {
        maxDaysInMonth[2] = 29;
    }

    int day = intGen->next(1, maxDaysInMonth[month]);

    Date result(day, month, year);
    return result;
}

Date BirthdayGenerator::next() {
    int currentYear = Date().year();
    auto intGen = RandomIntegerGenerator::instance();

    int year = min(1900 + (intGen->next() % MAX_AGE), currentYear);

    Date result = next(year);
    return result;
}