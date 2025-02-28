#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "date.h"
#include "address.h"
#include "student.h"

void testAddress();
void testDate();
void testStudent();

void loadStudent();
void printStudent();
void printData();
void findStudents();
void sort();
void menu();

int main(){
  std::vector<Student*>& students;
  menu();
  //std::cout << "Hello!" << std::endl;
  //testAddress();
  //testDate();
  //testStudent();
  return 0;
} // end main


void menu(){
  bool keepGoing=true;
  std::string input;
  while(keepGoing){
    std::cout << "0) quit" << std::endl << "1) print all student names" << std::endl << "2) print all student data" << std::endl << "3) find a student" << std::endl << "4) sort" << std::endl << std::endl << "Please choose 0-4: ";
    std::cin >> input;
    if(input=="1"){
      printStudents(std::vector<Student*>& students);
    } // end if
    if(input=="2"){
      printData(std::vector<Student*>& students);
    } // end if
    if(input=="3"){
      findStudents(std::vector<Student*>& students);
    } // end if
    if(input=="4"){
      sort(std::vector<Student*>& students);
    } // end if
    if(input=="0"){
      keepGoing=false;
    } // end if
  } // end while
} // end menu






void testAddress(){
  Address a;
  a.init("123 W Main St", "Muncie", "IN", "47303");
  a.printAddress();
} // end testAddress

void testDate(){
 Date d;
 d.init("01/27/1997");
 d.printDate();
} // end testDate

void testStudent(){
  std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
  Student* student = new Student();
  student->init(studentString);
  student->printStudent();
  std::cout << std::endl;
  std::cout << student->getLastFirst();
  delete student;
} // end testStudent




