#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(defaultConstructor, NullHead){
  SinglyLinkedList input;
  ListNode* actual = input.head_;
  ListNode* expected = nullptr;
  EXPECT_EQ(actual, expected);
}

TEST(vectorConstructor, iInValid){
  vector<int> inputVec = {1, 2, 3, 7};
  SinglyLinkedList input(inputVec, -1);
  vector<int> actual = input.print();
  vector<int> expected = inputVec;
  EXPECT_EQ(actual, expected);
}

TEST(vectorConstructor, iTooBig){
  vector<int> inputVec = {1, 2, 3, 7};
  SinglyLinkedList input(inputVec, 8);
  vector<int> actual = input.print();
  vector<int> expected = inputVec;
  EXPECT_EQ(actual, expected);
}


TEST(emptyShould, CheckEmptyList) {
  SinglyLinkedList input1;
  int actual = input1.empty();
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

TEST(emptyShould, CheckUnEmptyList) {
  vector<int> inputVec = {1, 2, 3, 7};
  SinglyLinkedList input1(inputVec, -1);
  int actual = input1.empty();
  int expected = 0;
  EXPECT_EQ(expected, actual);
}

TEST(sizeShould, CheckListSize) {
  vector<int> inputVec = {1, 2, 3, 7};
  SinglyLinkedList input1(inputVec, -1);
  int actual = input1.size();
  int expected = 4;
  EXPECT_EQ(expected, actual);
}

TEST(sizeShould, CheckEmptyListSize) {
  // vector<int> inputVec = {1, 2, 3, 7};
  SinglyLinkedList input1;
  int actual = input1.size();
  int expected = 0;
  EXPECT_EQ(expected, actual);
}


TEST(push_backShould, AddElementInEnd) {
  vector<int> inputVec1 = {1, 2, 3, 7};
  vector<int> inputVec2 = {1, 2, 3, 7, 8};
  SinglyLinkedList input(inputVec1, -1);
  input.push_back(8);
  vector<int> actual = input.print();
  vector<int> expected = inputVec2;
  EXPECT_EQ(expected, actual);
}

TEST(push_backShould, AddElementInNullList) {
  vector<int> inputVec = {5};
  SinglyLinkedList input;
  input.push_back(5);
  vector<int> actual = input.print();
  vector<int> expected = inputVec;
  EXPECT_EQ(expected, actual);
}


TEST(push_frontShould, AddElementInFront) {
  vector<int> inputVec1 = {1, 2, 3, 7};
  vector<int> inputVec2 = {8, 1, 2, 3, 7};
  SinglyLinkedList input(inputVec1, -1);
  input.push_front(8);
  vector<int> actual = input.print();
  vector<int> expected = inputVec2;
  EXPECT_EQ(expected, actual);
}

TEST(push_frontShould, AddElementInNullList) {
  vector<int> inputVec = {5};
  SinglyLinkedList input;
  input.push_front(5);
  vector<int> actual = input.print();
  vector<int> expected = inputVec;
  EXPECT_EQ(expected, actual);
}

TEST(insert_afterShould, insertNode) {
  vector<int> inputVec1 = {1, 2, 3, 7, 8, 9, 10};
  vector<int> inputVec2 = {1, 2, 3, 7, 4, 8, 9, 10};
  SinglyLinkedList input(inputVec1, -1);
  ListNode *k = input.GetIthPointer(4);
  input.insert_after(k, 4);
  vector<int> actual = input.print();
  vector<int> expected = inputVec2;  
  EXPECT_EQ(expected, actual);
}

TEST(insert_afterShould, insertNotExistNode) {
  vector<int> inputVec1 = {1, 2, 3, 4};
  vector<int> inputVec2 = {1, 2, 3, 4, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, -1);
  SinglyLinkedList input2(inputVec2, -1);
  ListNode *k = input2.GetIthPointer(5);
  input1.insert_after(k, 5);
  vector<int> actual = input1.print();
  vector<int> expected = inputVec1;  
  EXPECT_EQ(expected, actual);
}

TEST(insert_afterShould, inserInNullList) {
  vector<int> inputVec1 = {};
  vector<int> inputVec2 = {1, 2, 3, 4, 8, 9, 10};
  SinglyLinkedList input1;
  SinglyLinkedList input2(inputVec2, -1);
  ListNode *k = input2.GetIthPointer(5);
  input1.insert_after(k, 5);
  vector<int> actual = input1.print();
  vector<int> expected = inputVec1;  
  EXPECT_EQ(expected, actual);
}

TEST(eraseShould, deleteElement) {
  vector<int> inputVec1 = {1, 2, 3, 7, 4, 8, 9, 10};
  vector<int> inputVec2 = {1, 2, 3, 7, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, -1);
  ListNode *k = input1.GetIthPointer(5);
  input1.erase(k);
  vector<int> actual = input1.print();
  vector<int> expected = inputVec2;
  EXPECT_EQ(expected, actual);
}

TEST(eraseShould, deleteElementInNullList) {
  vector<int> inputVec1 = {};
  vector<int> inputVec2 = {1, 2, 3, 7, 8, 9, 10};
  SinglyLinkedList input1;
  SinglyLinkedList input2(inputVec2, -1);
  ListNode *k = input2.GetIthPointer(5);
  input1.erase(k);
  vector<int> actual = input1.print();
  vector<int> expected = inputVec1;
  EXPECT_EQ(expected, actual);
}

TEST(eraseShould, deleteNotExistElement) {
  vector<int> inputVec1 = {1, 2, 3, 7};
  vector<int> inputVec2 = {1, 2, 3, 7, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, -1);
  SinglyLinkedList input2(inputVec2, -1);
  ListNode *k = input2.GetIthPointer(5);
  input1.erase(k);
  vector<int> actual = input1.print();
  vector<int> expected = inputVec1;
  EXPECT_EQ(expected, actual);
}

TEST(pop_frontShould, RmFirstElement) {
  vector<int> inputVec1 = {1, 2, 3, 7, 4, 8, 9, 10};
  vector<int> inputVec2 = {2, 3, 7, 4, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, -1);
  input1.pop_front();
  vector<int> actual = input1.print();
  vector<int> expected = inputVec2;
  EXPECT_EQ(expected, actual);
}


TEST(pop_frontShould, nullList) {
  vector<int> inputVec1 = {};
  vector<int> inputVec2 = {};
  SinglyLinkedList input1;
  input1.pop_front();
  vector<int> actual = input1.print();
  vector<int> expected = inputVec2;
  EXPECT_EQ(expected, actual);
}

TEST(pop_backShould, RmLastElement) {
  vector<int> inputVec1 = {1, 2, 3, 7, 4, 8, 9, 10};
  vector<int> inputVec2 = {1, 2, 3, 7, 4, 8, 9};
  SinglyLinkedList input1(inputVec1, -1);
  input1.pop_back();
  vector<int> actual = input1.print();
  vector<int> expected = inputVec2;
  EXPECT_EQ(expected, actual);
}

TEST(pop_backShould, nullList) {
  vector<int> inputVec1 = {};
  vector<int> inputVec2 = {};
  SinglyLinkedList input1;
  input1.pop_back();
  vector<int> actual = input1.print();
  vector<int> expected = inputVec2;
  EXPECT_EQ(expected, actual);
}


TEST(backShould, ReturnLastElement) {
  vector<int> inputVec1 = {1, 2, 3, 7, 4, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, -1);
  int actual = input1.back();
  int expected = 10;
  EXPECT_EQ(expected, actual);
}

TEST(backShould, nullList) {
  SinglyLinkedList input1;
  int actual = input1.back();
  int expected = INT16_MIN;
  EXPECT_EQ(expected, actual);
}

TEST(frontShould, ReturnfirstElement) {
  vector<int> inputVec1 = {1, 2, 3, 7, 4, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, -1);
  int actual = input1.front();
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

TEST(frontShould, nullList) {
  SinglyLinkedList input1;
  int actual = input1.front();
  int expected = INT16_MIN;
  EXPECT_EQ(expected, actual);
}


TEST(GetBackPointerShould, ReturnBackElement) {
  vector<int> inputVec1 = {1, 2, 3, 7, 4, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, -1);
  ListNode* actualPointer = input1.GetBackPointer();
  int actual = actualPointer -> val;
  ListNode * actualNext = actualPointer -> next;
  int expected = 10;
  ListNode * expectedNext = nullptr;
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expectedNext, actualNext);
}

TEST(GetBackPointerShould, nullList) {
  SinglyLinkedList input1;
  ListNode* actual = input1.GetBackPointer();
  ListNode* expected = nullptr;
  EXPECT_EQ(expected, actual);
}


TEST(GetIthPointerShould, ReturnIthElement) {
  vector<int> inputVec1 = {1, 2, 3, 7, 4, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, -1);
  ListNode* actualPointer = input1.GetIthPointer(6);
  int actual = actualPointer -> val;
  int expected = 8;
  ListNode * actualNext = actualPointer -> next;
  ListNode * expectedNext = input1.GetIthPointer(7);
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expectedNext, actualNext);
}

TEST(GetIthPointerShould, iIsMinus) {
  vector<int> inputVec1 = {1, 2, 3, 7, 4, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, -1);
  ListNode* actual = input1.GetIthPointer(-1);
  ListNode* expected = nullptr;
  EXPECT_EQ(expected, actual);
}

TEST(GetIthPointerShould, iExceedSize) {
  vector<int> inputVec1 = {1, 2, 3, 7, 4, 8, 9, 10};
  SinglyLinkedList input1(inputVec1, -1);
  ListNode* actual = input1.GetIthPointer(9);
  ListNode* expected = nullptr;
  EXPECT_EQ(expected, actual);
}

TEST(GetIthPointerShould, NullList) {
  SinglyLinkedList input1;
  ListNode* actual = input1.GetIthPointer(9);
  ListNode* expected = nullptr;
  EXPECT_EQ(expected, actual);
}

