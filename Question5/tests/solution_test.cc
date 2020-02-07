#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(OperatorSelfAddShould, NotAbove100) {
  AcademicRecord a1(91, 88, 99);
  a1++;
  int actual1 = a1.Maths;
  int expected1 = 100;
  int actual2 = a1.Computers;
  int expected2 = 98;
  int actual3 = a1.Physics;
  int expected3 = 100;    
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
  EXPECT_EQ(expected3, actual3);
}

TEST(OperatorSelfMinusShould, NotBelow0) {
  AcademicRecord a1(50, 8, 30);
  a1--;
  int actual1 = a1.Maths;
  int expected1 = 30;
  int actual2 = a1.Computers;
  int expected2 = 0;
  int actual3 = a1.Physics;
  int expected3 = 10;    
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
  EXPECT_EQ(expected3, actual3);
}


TEST(OperatorAddShould, NotAbove100) {
  AcademicRecord a1(1, 88, 99);
  a1 += 50;
  int actual1 = a1.Maths;
  int expected1 = 51;
  int actual2 = a1.Computers;
  int expected2 = 100;
  int actual3 = a1.Physics;
  int expected3 = 100;    
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
  EXPECT_EQ(expected3, actual3);
}


TEST(OperatorMinusShould, NotBelow0) {
  AcademicRecord a1(50, 88, 30);
  a1 -= 80;
  int actual1 = a1.Maths;
  int expected1 = 0;
  int actual2 = a1.Computers;
  int expected2 = 8;
  int actual3 = a1.Physics;
  int expected3 = 0;    
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
  EXPECT_EQ(expected3, actual3);
}


