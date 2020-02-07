#include "solution.h"



bool Solution::ValidBracket(const string &input){
  stack<char> container;
  vector<char> bracket;
  for(auto it: input){
    if(it == '{' || it == '}' || it == '[' || it == ']' || it == '(' || it == ')'){
      bracket.push_back(it);
      // std::cout << it;
    }
  }
  for(auto it: bracket){
    if(it == '{'){
      container.push('}');
    }else if(it == '['){
      container.push(']');
    }else if(it == '('){
      container.push(')');
    }else if(container.empty() || container.top() != it){
      return false;
    }else if(container.top() == it){
      container.pop();
    }
  }
  return container.empty();
}