#include <iostream>


// displays how many weeks, days, hours and minutes in given amount of seconds
int main() {
    const int SECONDS_IN_MINUTE = 60;
    const int SECONDS_IN_HOUR = SECONDS_IN_MINUTE * 60;
    const int SECONDS_IN_DAY = SECONDS_IN_HOUR * 24;
    const int SECONDS_IN_WEEK = SECONDS_IN_DAY * 7;

    int seconds;
    std::cout << "Time in seconds (non empty input containing positive integers only)? : " << std::endl;
    std::cin >> seconds;

    int weeks = seconds / SECONDS_IN_WEEK;
    int leftover_seconds = seconds - weeks * SECONDS_IN_WEEK;

    int days = leftover_seconds / SECONDS_IN_DAY;
    leftover_seconds -= days * SECONDS_IN_DAY;

    int hours = leftover_seconds / SECONDS_IN_HOUR;
    leftover_seconds -= hours * SECONDS_IN_HOUR;

    int minutes = leftover_seconds / SECONDS_IN_MINUTE;
    leftover_seconds -= minutes * SECONDS_IN_MINUTE;

    std::cout << "There is/are " << weeks << " weeks " << days << " day(s) " << hours << " hour(s) " << minutes
    << " minute(s) and " << leftover_seconds << " second(s) in the " << seconds << " seconds." << std::endl;

    return 0;
}
