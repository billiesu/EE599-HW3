#include <iostream>
#include "src/lib/solution.h"


using std::ifstream;

int main()
{
    vector<int> input = {1, 4, 5, 23, 100, 12, 18, 175};
    // vector<int> input1 = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    LocationPointer point(input);
    while(1){
    point.PrintQuestion();
    int value;
    std::cin >> value;  
    if(value == 1){
        point.PointFirstElement(); 
    }else if(value == 2){
        point.PointLastElement();
    }else if(value == 3){
        point.PrintCurrentElement();
    }else if(value == 4){
        int i; 
        std::cout << "Enter the value of i: " << std::endl;
        std::cin >> i;
        point.IthElementFromCurrent(i);       
    }else if(value == 5){
        cout << "Exist!" <<endl;
        break;
    }else{
        cout << "Invalid Input!" <<endl;
        break;
    }
    }

   
    return EXIT_SUCCESS;
}