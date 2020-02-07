#include "solution.h"



vector<int> Solution::TwoSum(vector<int> v, int sum){
  vector<int> res;
  map<int, int> map;
  int size = v.size();
  if(size == 0){
    return res;
  }
  for(int i = 0; i < size; i++){
    map[v[i]] = i;
    // std::cout << i << ':' << v[i] << ' ' << map.at(v[i]) << std::endl;
  }
  
  for(int j = 0; j < size; j++){
    int need = sum - v[j];
    if(map.find(need) != map.end() && map.at(need) != j){
      res.push_back(j);
      res.push_back(map.at(need));
      return res;
    }
  }
  return res;
}

void Solution::PrintVector(vector<int> input){
  int size = input.size();
  std::cout << '{';
  for(int i = 0; i < size; i++){
    std::cout << input[i];
    if(i < size - 1){
      std::cout << ',';
    }
  }
  std::cout << '}' << std::endl;
}

