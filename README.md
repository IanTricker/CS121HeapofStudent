# CS121HeapofStudent

#include <fstream>
#include <iostream>
#include <sstream>

## loadStudents(vector<Student*>& students)

## printStudents(vector<Student*>& students)

## printData(vector<Studennt*>& students)

## findStudents(vector<Student*>& students)

## sort(<Student*>& students)

## menu()

## Main
```
menu()
```
## menu()
```
bool keepGoing = True
string num
while(keepGoing):
  print("0) quit
  1) print all student names
  2) print all student data
  3) find a student
  4) sort

  Please choose 0-4: ")
  input(num)

  if (num==1):
    printStudents()
  if (num==2):
    printData()
  if (num==3):
    findStudent()
  if (num==4):
    sort()
  if (num==0):
    keepGoing=False
```
## loadStudents
```
ifstream inFile
string currentLine
stringstream ss
string text
string sCounter
inFile("student.csv")

while(getline(inFile, currentLine)):
  ss.clear()
  ss.str("")

  ss.str(currentLine)
  getline(ss, sCounter, ',')
  getline(ss, text)
  Student::getLastFirst()
inFile.close
```

## printStudent(vector<Student*>& students)
```
ifstream inFile
string currentLine
stringstream ss
string text
string sCounter
inFile("student.csv")

while(getline(inFile, currentLine)):
  ss.clear()
  ss.str("")

  ss.str(currentLine)
  getline(ss, sCounter, ',')
  getline(ss, text)
  Student::getLastFirst()
