#include <iostream>

using namespace std;

int main()
{
    // get year double
    // separate it onto two parts
    // do check if second part is more than 0
    //      then return just first part
    //    if not
    //      return second part

    // version 1
    const int year = 1700;

    // double doubleYear = year / 100.0;
    // int firstPart = static_cast<int>(doubleYear);
    // double secondPart = doubleYear - firstPart;
    // if (secondPart > 0)
    // {
    //     return firstPart + 1;
    // } else {
    //     return firstPart;
    // }


    // version2: mine
    // double doubleYear = year / 100.0;
    // int firstPart = static_cast<int>(doubleYear);
    // return (doubleYear - firstPart > 0) ? firstPart + 1 : firstPart;

    // shorter and faster: somebodys
    // return (year + 99) / 100;

}
