#include <string>
#ifndef PERSON_H
#define PERSON_H

class Person {
  public:
    std::string name;
    std::string registrationTime;
    Person *next;

    // constructor
    Person(const std::string& name, const std::string& time):
       name(name),
       registrationTime(time),
       next(nullptr)
    {}
};

#endif //PERSON_H
