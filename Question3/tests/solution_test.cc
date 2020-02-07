#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(emptyShould, CheckEmptyList) {
  SinglyLinkedList input1;
  int actual = input1.empty();
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

TEST(emptyShould, CheckUnEmptyList) {
  vector<int> inputVec = {1, 2, 3, 7};
  SinglyLinkedList input1(inputVec, 3);
  int actual = input1.empty();
  int expected = 0;
  EXPECT_EQ(expected, actual);
}

TEST(sizeShould, CheckListSize) {
  vector<int> inputVec = {1, 2, 3, 7};
  SinglyLinkedList input1(inputVec, 4);
  int actual = input1.size();
  int expected = 4;
  EXPECT_EQ(expected, actual);
}

TEST(sizeShould, CheckEmptyListSize) {
  vector<int> inputVec = {1, 2, 3, 7};
  SinglyLinkedList input1(inputVec, 0);
  int actual = input1.size();
  int expected = 0;
  EXPECT_EQ(expected, actual);
}





TEST(push_backShould, AddElementInEnd) {
  vector<int> inputVec = {1, 2, 3, 7};
  SinglyLinkedList input1(inputVec, 3);
  input1.push_back(inputVec[3]);
  int actual = input1.back();
  SinglyLinkedList input2(inputVec, 4);
  int expected = input2.back();
  EXPECT_EQ(expected, actual);
}


TEST(push_frontShould, AddElementInFront) {
  vector<int> inputVec1 = {1, 2, 3, 7};
  vector<int> inputVec2 = {7, 1, 2, 3};
  SinglyLinkedList input1(inputVec1, 3);
  input1.push_front(inputVec1[3]);
  int actual = input1.front();
  SinglyLinkedList input2(inputVec2, 4);
  int expected = input2.front();
  EXPECT_EQ(expected, actual);
}

TEST(insert_afterShould, insertElement) {
  vector<int> inputVec1 = {1, 2, 3, 7, 8, 9, 10};
  vector<int> inputVec2 = {1, 2, 3, 7, 4, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, 7);
  ListNode *k = input1.GetIthPointer(4);
  input1.insert_after(k, 4);
  ListNode *insert = input1.GetIthPointer(5);
  int actual = insert -> val;
  SinglyLinkedList input2(inputVec2, 8);
  ListNode *shouldbe = input2.GetIthPointer(5);
  int expected = shouldbe -> val;
  EXPECT_EQ(expected, actual);
}

TEST(eraseShould, deleteElement) {
  vector<int> inputVec1 = {1, 2, 3, 7, 4, 8, 9, 10};
  vector<int> inputVec2 = {1, 2, 3, 7, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, 8);
  ListNode *k = input1.GetIthPointer(5);
  input1.erase(k);
  ListNode *afterErase = input1.GetIthPointer(5);
  int actual = afterErase -> val;
  SinglyLinkedList input2(inputVec2, 7);
  ListNode *shouldbe = input2.GetIthPointer(5);
  int expected = shouldbe -> val;
  EXPECT_EQ(expected, actual);
}

TEST(pop_frontShould, RmFirstElement) {
  vector<int> inputVec1 = {1, 2, 3, 7, 4, 8, 9, 10};
  vector<int> inputVec2 = {2, 3, 7, 4, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, 8);
  input1.pop_front();
  int actual = input1.front();
  SinglyLinkedList input2(inputVec2, 7);
  int expected = input2.front();
  EXPECT_EQ(expected, actual);
}


TEST(pop_backShould, RmLastElement) {
  vector<int> inputVec1 = {1, 2, 3, 7, 4, 8, 9, 10};
  vector<int> inputVec2 = {1, 2, 3, 7, 4, 8, 9};
  SinglyLinkedList input1(inputVec1, 8);
  input1.pop_back();
  int actual = input1.back();
  SinglyLinkedList input2(inputVec2, 7);
  int expected = input2.back();
  EXPECT_EQ(expected, actual);
}

TEST(backShould, ReturnLastElement) {
  vector<int> inputVec1 = {1, 2, 3, 7, 4, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, 8);
  int actual = input1.back();
  int expected = 10;
  EXPECT_EQ(expected, actual);
}

TEST(frontShould, ReturnfirstElement) {
  vector<int> inputVec1 = {1, 2, 3, 7, 4, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, 8);
  int actual = input1.front();
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

TEST(GetBackPointerShould, ReturnBackElement) {
  vector<int> inputVec1 = {1, 2, 3, 7, 4, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, 8);
  ListNode* actualPointer = input1.GetBackPointer();
  int actual = actualPointer -> val;
  int expected = 10;
  EXPECT_EQ(expected, actual);
}

TEST(GetIthPointerShould, ReturnIthElement) {
  vector<int> inputVec1 = {1, 2, 3, 7, 4, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, 8);
  ListNode* actualPointer = input1.GetIthPointer(6);
  int actual = actualPointer -> val;
  int expected = 8;
  EXPECT_EQ(expected, actual);
}


