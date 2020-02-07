#include "solution.h"


  SinglyLinkedList::SinglyLinkedList(){
    head_ = nullptr;
  }

  SinglyLinkedList::SinglyLinkedList(const vector<int> &input, int i){
    int size = input.size();
    if(i <= 0){
      head_ = nullptr;
      return;
    }
    if(i > size){
      i = size;
    }

    head_ = new ListNode(input[0]); 

    for(int j = 1; j < i; j++){
      SinglyLinkedList::push_back(input[j]);
    }

  }

  SinglyLinkedList::~SinglyLinkedList(){
  ListNode *ptemp;
  if(head_ == nullptr){
    delete head_;
    std::cout << "successful delete!" << std::endl;
    return;
  }

  while(head_ -> next != nullptr){
    ptemp = head_ -> next;
    head_ -> next = ptemp -> next;
    delete ptemp;
  }
  delete head_;
  std::cout << "successful delete!" << std::endl;

  }

  bool SinglyLinkedList::empty(){
    if(head_ == nullptr){
      return true;
    }else{
      return false;
    }
        
  }

  int SinglyLinkedList::size(){
    ListNode *ptemp;
    ptemp = head_;
    if(ptemp == nullptr){
      return 0;
    }
    int count = 0;
    while(ptemp != nullptr){
      count++;
      ptemp = ptemp -> next;
    }
    return count;   
  }


  void SinglyLinkedList::push_back(int i){
    ListNode *ptemp = SinglyLinkedList::GetBackPointer();
    ListNode *pnew = new ListNode(i);
    ptemp -> next = pnew;
  }


  void SinglyLinkedList::push_front(int i){
    ListNode *pnew = new ListNode(i);
    pnew -> next = head_;
    head_ = pnew;
  }


  void SinglyLinkedList::insert_after (ListNode *p, int i){
    ListNode *pnew = new ListNode(i);
    pnew -> next = p -> next;
    p -> next = pnew;
  }

  void SinglyLinkedList::erase(ListNode *p){
    ListNode *ptemp = head_;
    while(ptemp -> next != p){
      ptemp = ptemp -> next;
    }
    delete ptemp -> next;       //delete pointer
    ptemp -> next = p -> next;
  }

  void SinglyLinkedList::pop_back(){
    ListNode *ptemp = head_;
    while(ptemp -> next -> next != nullptr){
      ptemp = ptemp ->next;
    }
    delete ptemp -> next;             //delete pointer
    ptemp -> next = nullptr;
  }

  void SinglyLinkedList::pop_front(){
    ListNode *ptemp = head_ -> next;            //delete pointer
    head_ = ptemp;
  }  

  int SinglyLinkedList::back(){
    ListNode *ptemp = SinglyLinkedList::GetBackPointer();
    return ptemp -> val;
        
  }

  int SinglyLinkedList::front(){
    return head_ -> val;
  }

  ListNode *SinglyLinkedList::GetBackPointer(){
    ListNode* ptemp;
    ptemp = head_;
    while(ptemp -> next != nullptr){
      ptemp = ptemp -> next;
    }
    return ptemp;
  }

  ListNode *SinglyLinkedList::GetIthPointer(int i){
    if(i < 1) {
      return head_;
    }
    ListNode* ptemp;
    ptemp = head_;
    
    while(ptemp -> next != nullptr && --i != 0){
      ptemp = ptemp -> next;
    }
    return ptemp;
  }

  void SinglyLinkedList::print(){
    ListNode *ptemp;
    ptemp = head_;
    std::cout << '{';
    while(ptemp != nullptr){
      std::cout << ptemp -> val;
      if(ptemp -> next != nullptr){
        std::cout << "->";
      }
      ptemp = ptemp -> next;
    }
    std::cout << '}' << std::endl;
  }
