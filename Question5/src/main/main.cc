#include <iostream>
#include "src/lib/solution.h"

using std::cout;
using std::endl;
int main()
{
    // AcademicRecord a1;
    // AcademicRecord a2(20, 30, 40);
    // AcademicRecord a3(a2);
    // std::cout << "a1 using default constructor to construct: " << std::endl;
    // a1.print();
    // std::cout << "a2 using initial number constructor to construct: " << std::endl;
    // a2.print();
    // std::cout << "a3 using copy constructor to construct: " << std::endl;
    // a3.print();

    // std::cout << "value before prefix incrementation" << std::endl;
    // a1.print();
    // ++ a1;
    // std::cout << "value aftrer incrementation" << std::endl;
    // a1.print();

    // std::cout << "value before postfix incrementation"<< std::endl;
    // a1.print();
    // a1 ++;
    // std::cout << "value after postfix incrementation"<< std::endl;
    // a1.print();

    // std::cout << "value before postfix decrementation" << std::endl;
    // a2.print();
    // a2 --;
    // std::cout << "value after postfix decrementation" << std::endl;
    // a2.print();

    // std::cout << "value before prefix decrementation" << std::endl;
    // a2.print();    
    // -- a2;
    // std::cout << "value before prefix decrementation" << std::endl;
    // a2.print();

    // std::cout << "value before incrementation" << std::endl;
    // a3.print();
    // a3 += 4;
    // std::cout << "value after incrementation" << std::endl;
    // a3.print();

    // std::cout << "value before  decrementation" << std::endl;
    // a3.print();    
    // a3 -= 10;
    // std::cout << "value before  decrementation" << std::endl;
    // a3.print();



    AcademicRecord obj1, obj2;
    obj1.Maths = 5; 
    obj1.Physics = 10;
    obj1.Computers = 95; 
     
    cout<< "Value before incrementation::" << endl;
    obj1.print(); 
    obj1++; 
    cout<< "Value after incrementation::" << endl;
    obj1.print(); 
    obj1--; 
    cout<< "Value after decrementation::" << endl;
    obj1.print(); 
    obj2 = obj1;
    cout<< "Value of Object 2::" << endl;
    obj2.print(); 
    obj2 += 50; 
    cout<< "Value of Object 2 after increasing marks by 50 for each subject::" << endl;
    obj2.print();
    obj2 -= 30; 
    cout<< "Value of Object 2 after decreasing marks by 30 for each subject::" << endl;
    obj2.print();    

    return EXIT_SUCCESS;
}