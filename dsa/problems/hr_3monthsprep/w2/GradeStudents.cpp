#include <iostream>
#include <vector>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/******************************************************************************
*   Round grades according to these rules:
*   If the difference between the grade and the next multiple of 5 is less than
*   5, round grade up to the next multiple of 5.
*   If the value of grade is less than 38, no rounding occurs as the result
*   will still be a failing grade.
 ******************************************************************************/
std::vector<int> roundGrades(std::vector<int> grades) {
    if (grades.empty()) {
        throw std::invalid_argument("The 'grades' array is empty.");
    }

    // check for negative values in array grades
    for (auto grade : grades) {
        if (grade < 0 || grade > 100) {
            throw std::invalid_argument("Grades must be between 0 and 100");
        }
    }

    std::vector<int> roundedGrades {};
    int multiple, difference;

    for (auto grade : grades) {
        multiple = grade % 5;
        difference = 5 - multiple;

        if (grade >= 0 && grade > 40) {
            if (difference < 3) {
                grade = grade + difference;
                roundedGrades.push_back(grade);
            } else {
                roundedGrades.push_back(grade);
            }
        } else if (grade < 40 && grade >= 38) {
            grade = grade + difference;
            roundedGrades.push_back(grade);
        } else {
            roundedGrades.push_back(grade);
        }
    }
    return roundedGrades;
}


TEST_CASE("positive") {
    std::vector<int> grades {73, 67, 38, 33};
    std::vector<int> roundedGradesArray {75, 67, 40, 33};

    CHECK(roundGrades(grades) == roundedGradesArray);
}

TEST_CASE("edge case #1: empty input array") {
    std::vector<int> grades {};
    std::vector<int> roundedGradesArray {75, 67, 40, 33};

    CHECK_THROWS_AS(roundGrades(grades), std::invalid_argument);
}

TEST_CASE("edge case #2: negative values in input array") {
    std::vector<int> grades {-73, -67, -38, -33};
    std::vector<int> roundedGradesArray {75, 67, 40, 33};

    CHECK_THROWS_AS(roundGrades(grades), std::invalid_argument);
}


