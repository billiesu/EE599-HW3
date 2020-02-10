#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(ValidBracketShould, ValidInput1) {
  Solution solution;
  string s1 = "({sk + [iaj + ka] = })";
  bool actual = solution.ValidBracket(s1);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}

TEST(ValidBracketShould, ValidInput2) {
  Solution solution;
  string s1 = "( a + b) * {a + c} + [9 + b{";
  bool actual = solution.ValidBracket(s1);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}

TEST(ValidBracketShould, InValidInput) {
  Solution solution;
  string s1 = "";
  bool actual = solution.ValidBracket(s1);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}