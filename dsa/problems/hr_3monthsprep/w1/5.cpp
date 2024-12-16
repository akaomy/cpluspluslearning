#include <iostream>
#include <vector>
#include <string>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/***************************************************************************
*   There is a collection of input strings and a collection of query
*   strings. For each query string, determine how many times it occurs in
*   the list of input strings. Return an array of the results.
 ***************************************************************************/

std::vector<int> countStrings(std::vector<std::string> strings, std::vector<std::string> queries) {
    std::vector<int> result;

    if (strings.empty()) {
        throw std::invalid_argument("The 'strings' array is empty.");
    }
    if (queries.empty()) {
        throw std::invalid_argument("The 'queries' array is empty.");
    }

    for (const auto & querie : queries) {
        int counter = 0;
        for (const auto & string : strings) {
            if (querie == string) {
                counter++;
            }
        }
        result.push_back(counter);
    }

    return result;
}

TEST_CASE("positive test") {
    std::vector<std::string> strings {"ab", "ab", "ab", "ab", "bc", "bc", "de"};
    std::vector<std::string> queries {"ab", "bc", "de", "jr"};

    CHECK(countStrings(strings, queries) == std::vector<int>{4, 2, 1, 0});
}

TEST_CASE("edge case: empty 'strings' array") {
    std::vector<std::string> strings {};
    std::vector<std::string> queries {"ab", "bc", "de", "jr"};

    CHECK_THROWS_AS(countStrings(strings, queries), std::invalid_argument);
}

TEST_CASE("edge case: empty 'query' array") {
    std::vector<std::string> strings {"ab", "bc", "de", "jr"};
    std::vector<std::string> queries {};

    CHECK_THROWS_AS(countStrings(strings, queries), std::invalid_argument);
}
