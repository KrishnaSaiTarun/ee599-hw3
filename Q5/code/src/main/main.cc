
#include "src/lib/solution.h"

int main()
{
    AcademicRecord a ;
    
    a.maths = 5;
    a.computers = 10;
    a.physics = 95;

    std::cout << "Value of 'a' currently ::" << std::endl;
    a.printRes();

    a++;
    std::cout << "Value of 'a' after incrementation ::" << std::endl;
    a.printRes();

    a--;
    std::cout << "Value of 'a' after decrementation ::" << std::endl;
    a.printRes();

    
    AcademicRecord b = a;
    if(a == b) std::cout << "Yes both 'a' and 'b' are equal. Copy worked and comparison '==' worked!!!!" << std::endl;
    std::cout << "Value of 'b' initially::" << std::endl;
    b.printRes();

    b+=50;
    std::cout << "Value of 'b' after increasing marks by 50 for each subject::" << std::endl;
    b.printRes();

    b-=30;
    std::cout << "Value of 'b' after decreasing marks by 30 for each subject::" << std::endl;
    b.printRes();

    return EXIT_SUCCESS;
}