
#include "src/lib/solution.h"

int main()
{
    AcademicRecord a ;
    
    a.maths = 5;
    a.computers = 10;
    a.physics = 95;

    std::cout << " Value before incrementation ::" << std::endl;
    std::cout << "maths :" << a.maths << "     COputers" << a.computers << "    physics: " << a.physics << std::endl;

    a++;

    std::cout << " Value after incrementation ::" << std::endl;
    std::cout << "maths :" << a.maths << "     COputers" << a.computers << "    physics: " << a.physics << std::endl;



    return EXIT_SUCCESS;
}