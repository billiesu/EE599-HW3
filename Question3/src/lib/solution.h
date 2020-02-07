#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <vector>
#include <iostream>

using std::vector;



struct ListNode{
  int val;
  ListNode *next;
  ListNode(int x): val(x), next(nullptr) {}
};

class SinglyLinkedList {
public:
  SinglyLinkedList();              //给head_ 赋空指针
  SinglyLinkedList(const vector<int> &input, int i);   
  ~SinglyLinkedList();                         
  bool empty();
  int size();
  void push_back(int i);
  void push_front(int i);
  void insert_after (ListNode *p, int i);
  void erase(ListNode *p);
  void pop_front();
  void pop_back();                             //delete
  int back();
  int front();
  ListNode *GetBackPointer();
  ListNode *GetIthPointer(int i);
  void print();

  ListNode *head_;
};

#endif