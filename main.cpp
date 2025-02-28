#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include "date.h"
#include "address.h"
#include "student.h"

void testAddress();
void testDate();
void testStudent();

void loadStudent(std::vector<Student*>& students);
void printStudent(std::vector<Student*>& students);
void printStudentNames(std::vector<Student*>& students);
void findStudents(std::vector<Student*>& students);
void sort(std::vector<Student*>& students);
void delStudents(std::vector<Student*>& students);
std::string menu();

int main(){
  std::vector<Student*> students;
  loadStudent(students);

  bool keepGoing=true;
  std::string choice;
  while(keepGoing){
    choice = menu();
    if(choice=="1"){
      printStudentNames(students);
    } // end if
    if(choice=="2"){
      printStudent(students);
    } // end if
    if(choice=="3"){
      findStudents(students);
    } // end if
    if(choice=="4"){
     sort(students);
    } // end if
    if(choice=="0"){
      keepGoing=false;
    } // end if
  } // end while

  delStudents(students);
  return 0;
} // end main

std::string menu(){
  std::cout << "0) quit" << std::endl << "1) print all student names" << std::endl << "2) print all student data" << std::endl << "3) find a student" << std::endl << std::endl << "Please choose 0-3: " << std::endl;
  std::string choice;
  std::cin >> choice;
  return choice;
} // end menu


void loadStudent(std::vector<Student*>& students){
  std::ifstream inFile;
  std::string currentLine;
  inFile.open("students.csv");
  std::stringstream ss;
  while(getline(inFile, currentLine)){
    Student* student = new Student();
    student->init(currentLine);
    students.push_back(student);
  } // end while
  inFile.close();
} // end loadStudent

void delStudents(std::vector<Student*>& students){
  for(auto& student : students){
    delete student;
  } // end for
  students.clear();
} // end delStudents

void printStudent(std::vector<Student*>& students){
  for(const auto& student : students){
    student->printStudent();
  } // end for loop
  std::cout << std::endl;
} // end printStudent

void printStudentNames(std::vector<Student*>& students){
  for(const auto& student : students){
    std::cout << student->getLastFirst();
  } // end for loop
  std::cout << std::endl;
} // end printStudentNames


void findStudents(std::vector<Student*>& students){
  std::string lastName;
  std::cout << "last name of student: ";
  std::cin >> lastName;
  std::cout << std::endl;
  for(const auto& student : students){
    if(student->getLastName().find(lastName) != std::string::npos){
      student->printStudent();
    } // end if
  } // end for loop
  std::cout << std::endl;
} // end findStudents

void sort(std::vector<Student*>& students){
  
} // end sort



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




