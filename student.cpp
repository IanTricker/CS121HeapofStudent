#include <iostream>
#include <sstream>
#include "address.h"
#include "date.h"
#include "student.h"

Student::Student(){
  std::string studentString = "";
  std::string firstName = "";
  std::string lastName = "";
  dob = new Date();
  expectedGrad = new Date();
  address = new Address();
  int creditHours = 0;
} // end construstor

Student::~Student(){
  delete dob;
  delete expectedGrad;
  delete address;
} // end destructor

void Student::init(std::string studentString){
  Student::studentString = studentString;

  std::stringstream ss;
  std::string street;
  std::string city;
  std::string state;
  std::string zip;
  std::string dobString;
  std::string expectedGradString;

  ss.clear();
  ss.str(studentString);

  getline(ss, firstName, ',');
  getline(ss, lastName, ',');
  getline(ss, street, ',');
  getline(ss, city, ',');
  getline(ss, state, ',');
  getline(ss, zip, ',');
  getline(ss, dobString, ',');
  getline(ss, expectedGradString, ',');
  getline(ss, creditHoursString, ',');
  
  ss.clear;
  ss.str("");
  
  ss << creditHoursString;
  ss >> creditHours;

  address->init(street, city, state, zip);
  dob->init(dobString);
  expectedGrad->init(expectedGradString);
  
} // end init

void Student::printStudent(){
  std::cout << firstName << " " << lastName << std::endl;
  address->printAddress();

  std::cout << "DOB: ";
  dob->printDate();
  std::cout << "Grad: ";
  expectedGrad->printDate();

  std::cout << "Credits: " << creditHours << std::endl;
  std::cout << "____________________________________";
  std::cout << std::endl;

} // end printStudent

std::string Student::getLastFirst(){
  std::stringstream ss;
  ss.clear();
  ss << lastName << "," << firstName;
  return ss.str();
} // end getLastFirst

std::string Student::getFirstName(){
  return firstName;
} // end getFirstName

std::string Student::getLastName(){
  return lastName;
} // end getLastName

int getCreditHours(){
  return 0;
} // end getCreditHours
