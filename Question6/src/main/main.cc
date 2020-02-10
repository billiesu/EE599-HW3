#include <iostream>
#include "src/lib/solution.h"
#include <fstream>


using std::ifstream;

int main()
{
    ifstream fin;
    fin.open("src/main/vector.txt");
    string s; 
    vector<int> input;
    while(fin >> s){
        int i = stoi(s);
        input.push_back(i);
    }

    LocationPointer point(input);
    int size = input.size();

    while(1){
    point.PrintQuestion();
    int value;
    // std::cout << "Please enter a value: " << std::endl;
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
        if(*point.currentLocation == input[size - 1] || *point.currentLocation == input[size - 2] || *point.currentLocation == input[size - 3] ){
            std::cout << "Sorry! You cannot traverse 3 elements from your current location." << std::endl;
        }else{
            point.IthElementFromCurrent(i);
        }       
    }else if(value == 5){
        cout << "Exist!" <<endl;
        break;
    }
       
    }

    // LocationPointer point(input);
    // point.PrintQuestion();  
    // point.PointFirstElement();
    // point.PointLastElement();
    // point.PrintCurrentElement();
    // point.PointFirstElement();
    // point.IthElementFromCurrent(3);

    
   
    return EXIT_SUCCESS;
}