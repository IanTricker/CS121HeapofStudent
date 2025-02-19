#include <iostream>
#include <sstream>
#include "date.h"

Date::Date(){
  std::string dateString="";
  int month=0;
  int day=0;
  int year=0;
} // end constructor

void Date::init(std::string dateString){
  Date:dateString = dateString;

  std::stringstream ss;
  std::string tMonth;
  std::string tDay;
  std::string tYear;

  ss.clear();
  ss.str(dateString);

  getline(ss, tMonth, '/');
  getline(ss, tDay, '/');
  getline(ss, tYear, '/');

  ss.clear();
  ss.str("");

  ss << tDay << " " << tMonth << " " << tYear;
  ss >> day >> month >> year;
} // end init

void Date::printDate(){
  std::string monthString[]={"Null","January","Febuary","March","April","May","June","July","August","September","October","November","December"};
  std::cout << monthString[month] << "/" << day << "/" << year << std::endl;
} // end printDate
