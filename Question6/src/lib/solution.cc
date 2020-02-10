#include "solution.h"


// copy construct
LocationPointer::LocationPointer(const vector<int> &scan){
  input = scan;
  current = input.begin();
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
  current = input.begin();
  cout << "Output: " << *current << endl;
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
  current = --input.end();
  cout << "Output: " << *current << endl;
}

void LocationPointer::PrintCurrentElement(){
  cout << "Output: " << *current << endl;
}

void LocationPointer::IthElementFromCurrent(int i){
  if(i < 0){
    cout << "Value i cannot be negative" << endl;
    return;
  }
  std::vector<int>::iterator temp = current;
  for(int j = 0; j < i; j++){
    current ++;
  }
  // cout << "a:" << std::distance(temp, current) << endl;
  // cout <<  "b:" << std::distance(temp, input.end()) << endl;
  if(std::distance(temp, current) < std::distance(temp, input.end())) {
    cout << "Output: " << *current << endl;
  }else{
    cout << "Sorry! You cannot traverse" << i << "elements from your current location." << endl;
    current = temp;
  }
  
}

// void LocationPointer::Exit(){
//   // exist();
// }