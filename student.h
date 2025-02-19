#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <iostream>
#include "address.h"
#include "date.h"

class Student{
  protected:
    std::string studentString;
    std::string firstName;
    std::string lastName;
    Date* dob;
    Date* expectedGrad;
    Address* address;
    int creditHours;
  public:
    Student();
    ~Student();
    void init(std::string studentString);
    void printStudent();
    std::string getLastFirst();
};

#endif
