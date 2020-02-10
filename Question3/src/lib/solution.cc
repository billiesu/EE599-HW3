#include "solution.h"


  SinglyLinkedList::SinglyLinkedList(){
    head_ = nullptr;
  }

  SinglyLinkedList::SinglyLinkedList(const vector<int> &input, int i){
    int size = input.size();
    if(size < 1){
      head_ = nullptr;
      return;
    }

    head_ = new ListNode(input[0]); 
    for(int j = 1; j < size; j++){
      SinglyLinkedList::push_back(input[j]);
    }
    if(i < 1 || i > size){
      return;
    }else{
      ListNode *last = SinglyLinkedList::GetBackPointer();
      ListNode *temp = SinglyLinkedList::GetIthPointer(i);
      // std::cout << "inset value:" << temp -> val << std::endl;
      if(temp != nullptr){
        last -> next = temp;
      }    
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
    // if(ptemp -> next != nullptr){
      head_ -> next = ptemp -> next; 
    // }
    // std::cout << "ptemp value:" << ptemp  -> val << std::endl;
    if(ptemp != nullptr){
      delete ptemp;
      ptemp = nullptr;
    }
  }
  delete head_;
  head_ = nullptr;
  std::cout << "successful delete!" << std::endl;
  }


  bool SinglyLinkedList::empty(){
    if(head_ == nullptr){
      std::cout << "This is a empty list!!" << std::endl;
      return true;
    }else{
      std::cout << "This is not  a empty list!!" << std::endl;
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
    if(ptemp == nullptr){
      head_ = pnew;
    }else{
      ptemp -> next = pnew;
    }
  } 


  void SinglyLinkedList::push_front(int i){
    ListNode *pnew = new ListNode(i);
    if(head_ == nullptr){
      head_ = pnew;
    }else{
      pnew -> next = head_;
      head_ = pnew;
    }

  }


  void SinglyLinkedList::insert_after (ListNode *p, int i){
    if(head_ == nullptr){
      std::cout << "This is a null list!!" << std::endl;
    }
    if(NodeExist(p)){
      ListNode *pnew = new ListNode(i);
      pnew -> next = p -> next;
      p -> next = pnew;
    }else{
      std::cout << "This needing insert node is not exist" << std::endl;
    }
  }

  bool SinglyLinkedList::NodeExist(ListNode *p){
    if(head_ == nullptr){
      std::cout << "This is a null list!" << std::endl;
      return false;
    } 
    ListNode *ptemp = head_;   
    while(ptemp != nullptr){
      if(ptemp -> next == p -> next && ptemp -> val == p -> val){
        return true;
      }
      ptemp = ptemp -> next;
    }
    return false;
  }

  void SinglyLinkedList::erase(ListNode *p){
    if(head_ == nullptr){
      std::cout << "Node not exist!" << std::endl;
      return;
    } 
    if(!NodeExist(p)){
      std::cout << "Node not exist!" << std::endl;
      return;      
    }    
    ListNode *ptemp = head_;
    while(ptemp -> next != p){
      ptemp = ptemp -> next;
    }
    delete ptemp -> next;       //delete pointer
    ptemp -> next = p -> next;
  }

  void SinglyLinkedList::pop_back(){
    if(head_ == nullptr){
      std::cout << "List is null!" << std::endl;
      return;
    }  

    ListNode *ptemp = head_;
    while(ptemp -> next -> next != nullptr){
      ptemp = ptemp ->next;
    }
    delete ptemp -> next;             //delete pointer
    ptemp -> next = nullptr;
  }

  void SinglyLinkedList::pop_front(){
    if(head_ == nullptr){
      std::cout << "List is null!" << std::endl;
      return;
    }      
    ListNode *ptemp = head_ -> next;            //delete pointer
    delete head_;   //可能出问题
    head_ = ptemp;
  }  

  int SinglyLinkedList::back(){
    ListNode *ptemp = SinglyLinkedList::GetBackPointer();
    if(ptemp == nullptr){
      return INT16_MIN;
    }
    return ptemp -> val; 
  }

  int SinglyLinkedList::front(){
    if(head_ == nullptr){
      return INT16_MIN;
    }    
    return head_ -> val;
  }

  ListNode *SinglyLinkedList::GetBackPointer(){
    if(head_ == nullptr){
      std::cout << "It is a empty list!!" << std::endl;
      return head_;
    }
    ListNode* ptemp;
    ptemp = head_;
    while(ptemp -> next != nullptr){
      ptemp = ptemp -> next;
    }
    return ptemp;
  }

  ListNode *SinglyLinkedList::GetIthPointer(int i){
    if(head_ == nullptr || i < 1) {
      std::cout << "Ith pointer not exist in list!!" << std::endl;
      return nullptr;
    }
    ListNode* ptemp;
    ptemp = head_;
    while(ptemp != nullptr && --i != 0){
      ptemp = ptemp -> next;
    }
    if(i == 0){
    return ptemp;
    }else{
      std::cout << "i is bigger than list size!!" << std::endl;
      return nullptr;
    }

  }

  vector<int> SinglyLinkedList::print(){
    vector<int> res;
    ListNode *ptemp;
    ptemp = head_;
    std::cout << '{';
    while(ptemp != nullptr){
      std::cout << ptemp -> val;
      res.push_back(ptemp -> val);
      if(ptemp -> next != nullptr){
        std::cout << "->";
      }
      ptemp = ptemp -> next;
    }
    std::cout << '}' << std::endl;
    return res;
  }
