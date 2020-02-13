#include "solution.h"

  AcademicRecord::AcademicRecord(){

    maths = 0;
    computers = 0;
    physics = 0;
  }

  AcademicRecord::AcademicRecord(const int m , const int c, const int p){

    maths = m;
    computers = c;
    physics = p;

  }


  AcademicRecord::AcademicRecord(const AcademicRecord &copyFrom){

     maths = copyFrom.maths;
     computers = copyFrom.computers;
     physics = copyFrom.physics;

  }

 AcademicRecord AcademicRecord::operator ++(){

   AcademicRecord temp;
    
    if(temp.maths < 90)  temp.maths = temp.maths + 10; 
    else temp.maths = 100; 

    if(temp.computers < 90)  temp.computers = temp.computers + 10; 
    else temp.computers = 100;

    if(temp.physics < 90)  temp.physics = temp.physics + 10; 
    else temp.physics = 100;

    return temp;

 }
  AcademicRecord AcademicRecord::operator ++(int)  {

   AcademicRecord temp;
    
    if(temp.maths < 90)  temp.maths = temp.maths + 10; 
    else temp.maths = 100; 

    if(temp.computers < 90)  temp.computers = temp.computers + 10; 
    else temp.computers = 100;

    if(temp.physics < 90)  temp.physics = temp.physics + 10; 
    else temp.physics = 100;

    return temp;
  }

  void AcademicRecord::printRes(){

    std::cout << "maths :" << maths << "     COputers" << computers << "    physics: " << physics << std::endl;


  }
