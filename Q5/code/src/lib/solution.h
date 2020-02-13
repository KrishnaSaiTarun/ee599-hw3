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

  void operator ++();
  void operator ++(int);

  void operator --();
  void operator --(int);

  void operator +=(int);
  void operator -=(int);

  bool operator ==(const AcademicRecord &a);

  void printRes();

  
};

#endif