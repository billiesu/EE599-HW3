#include "solution.h"


// copy construct
LocationPointer::LocationPointer(const vector<int> &scan){
  input = scan;
  currentLocation = &input[0];
}

void LocationPointer::PrintQuestion(){
  cout << "****************************************************" << endl;
  cout << "Vector: ";
  LocationPointer::PrintVector(input);
  cout << "****************************************************" << endl;
  cout << "Please choose any of the following options:" << endl;
  cout << "1. What is the first element?" << endl;
  cout << "2. What is the last element?" << endl;
  cout << "3. What is the current element?" << endl;
  cout << "4. What is the ith element from the current location?" << endl;
  cout << "5. Exit." << endl;
  cout << "****************************************************" << endl;

}

void LocationPointer::PointFirstElement(){
  currentLocation = &input[0];
  cout << "Output: " << *currentLocation << endl;
}

void LocationPointer::PrintVector(const vector<int> &input){
  int size = input.size();
  int count = 0;
  cout << '{';
  for(auto it: input){
    count++;
    cout << it;
    if(count < size){
      cout << ',';
    }
  }
  cout << "}" << endl; 
}  

void LocationPointer::PointLastElement(){
  int size = input.size();
  currentLocation = &input[--size];
  cout << "Output: " << *currentLocation << endl;
}

void LocationPointer::PrintCurrentElement(){
  cout << "Output: " << *currentLocation << endl;
}

void LocationPointer::IthElementFromCurrent(int i){
  for(int j = 0; j < i; j++){
    currentLocation ++;
  }
  cout << "Output: " << *currentLocation << endl;
}

// void LocationPointer::Exit(){
//   // exist();
// }