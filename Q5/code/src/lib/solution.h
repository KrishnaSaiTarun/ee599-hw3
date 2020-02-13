#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>

class AcademicRecord {

public:

  int maths;
  int computers;
  int physics;

  AcademicRecord();
  AcademicRecord(const int m , const int c, const int p);
  AcademicRecord(const AcademicRecord &copy);

  AcademicRecord operator ++();
  AcademicRecord operator ++(int);

  void printRes();

  
};

#endif