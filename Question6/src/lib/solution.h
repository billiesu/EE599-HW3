#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;
using std::string;

class LocationPointer {
public:
  LocationPointer(const vector<int> &scan);
  void PrintQuestion();
  void PrintVector(const vector<int> &input);
  void PointFirstElement();
  void PointLastElement();
  void PrintCurrentElement();
  void IthElementFromCurrent(int i);
  // void Exit();


  vector<int> input;
  int *currentLocation;

};

#endif