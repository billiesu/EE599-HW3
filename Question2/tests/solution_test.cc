#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(TwoSumShould, ValidInput) {
  Solution solution;
  vector<int> input = {3,7,11,15};
  int sum = 10;
  vector<int> actual = solution.TwoSum(input, sum);  
  vector<int> expected = {0,1};
  EXPECT_EQ(expected, actual);
}

TEST(TwoSumShould, InvalidInput) {
  Solution solution;
  vector<int> input = {};
  int sum = 10;
  vector<int> actual = solution.TwoSum(input, sum);  
  vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}


TEST(TwoSumShould, RepeatElements) {
  Solution solution;
  vector<int> input = {3,7,3,15};
  int sum = 6;
  vector<int> actual = solution.TwoSum(input, sum);  
  vector<int> expected = {0,2};
  EXPECT_EQ(expected, actual);
}


TEST(TwoSumShould, NullResult) {
  Solution solution;
  vector<int> input = {3,7,3,15};
  int sum = 20;
  vector<int> actual = solution.TwoSum(input, sum);  
  vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}





