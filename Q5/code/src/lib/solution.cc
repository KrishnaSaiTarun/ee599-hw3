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

 void AcademicRecord::operator ++(){
    
    if(this->maths < 90)  this->maths = this->maths + 10; 
    else this->maths = 100; 

    if(this->computers < 90)  this->computers = this->computers + 10; 
    else this->computers = 100;

    if(this->physics < 90)  this->physics = this->physics + 10; 
    else this->physics = 100;

 }

  void AcademicRecord::operator ++(int)  {

    
    if(this->maths < 90)  this->maths = this->maths + 10; 
    else this->maths = 100; 

    if(this->computers < 90)  this->computers = this->computers + 10; 
    else this->computers = 100;

    if(this->physics < 90)  this->physics = this->physics + 10; 
    else this->physics = 100;
  }


 void AcademicRecord::operator --(){
    
    if(this->maths > 20)  this->maths = this->maths - 20; 
    else this->maths = 0; 

    if(this->computers > 20)  this->computers = this->computers - 20; 
    else this->computers = 0;

    if(this->physics > 20)  this->physics = this->physics - 20; 
    else this->physics = 0;

 }

  void AcademicRecord::operator --(int)  {

    
    if(this->maths > 20)  this->maths = this->maths - 20; 
    else this->maths = 0; 

    if(this->computers > 20)  this->computers = this->computers - 20; 
    else this->computers = 0;

    if(this->physics > 20)  this->physics = this->physics - 20; 
    else this->physics = 0;
  }

  void AcademicRecord::operator +=(int a){

    if(this->maths + a < 100)  this->maths = this->maths + a; 
    else this->maths = 100; 

    if(this->computers + a < 100)  this->computers = this->computers + a; 
    else this->computers = 100;

    if(this->physics + a < 100)  this->physics = this->physics + a; 
    else this->physics = 100;

  }


  void AcademicRecord::operator -=(int a){

    if(this->maths - a > 0)  this->maths = this->maths - a; 
    else this->maths = 0; 

    if(this->computers - a > 0)  this->computers = this->computers - a; 
    else this->computers = 0;

    if(this->physics - a > 0)  this->physics = this->physics - a; 
    else this->physics = 0;
  }

  bool AcademicRecord::operator ==(const AcademicRecord &a){

    if(a.maths != this->maths) return false;
    if(a.computers != this->computers) return false;
    if(a.physics != this->physics) return false;

    return true;

  }


  void AcademicRecord::printRes(){

    std::cout << "Maths::" << maths << std::endl << "Coputers::" << computers << std::endl <<"Physics: " << physics << std::endl;


  }





