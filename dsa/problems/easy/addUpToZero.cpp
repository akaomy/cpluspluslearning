#include <iostream>
#include <array>
#include <cassert>

bool checkForSumZero(const std::array<int, 6>& arr)
{
    // Given a list of ints, return True if any two numbers in the list add up to 0.
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] != arr[j] && arr[i] + arr[j] == 0)
            {
                std::cout << "True" << std::endl;
                return true;
            }
        }
    }
    std::cout << "False" << std::endl;
    return false;
}

void test_checkForSumZero()
{
    std::array<int, 6> test1 = {4, -4, 3, -3, 2, 6};
    std::array<int, 6> test2 = {1, 2, 3, 4, 5, 6};
    std::array<int, 6> test3 = {0, 1, 2, 3, 4, 5};


    // case1: expect true
    assert(checkForSumZero(test1) == true);
    // case2: expect false
    assert(checkForSumZero(test2) == false);
    // case3: expect false
    assert(checkForSumZero(test3) == false);
}


int main() {
    test_checkForSumZero();

    return 0;
}