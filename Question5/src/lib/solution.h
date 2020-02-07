#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>

class AcademicRecord {
public:
  AcademicRecord();
  AcademicRecord(int mathIn, int computerIn, int physicsIn);
  AcademicRecord(const AcademicRecord &a2);

  AcademicRecord operator++();
  AcademicRecord operator--();
  AcademicRecord operator++(int);
  AcademicRecord operator--(int); 
  AcademicRecord operator+=(int input);
  AcademicRecord operator-=(int input);
  bool operator==(const AcademicRecord &a2);
  void print();
  void add(int i, int &grade);
  void minus(int i, int &grade);


  int Maths;
  int Computers;
  int Physics;

};

#endif