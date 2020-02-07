#include <iostream>
#include "src/lib/solution.h"

int main()
{   
    vector<int> input = {1, 2, 3};
    SinglyLinkedList list(input, 3);
    std::cout << "origin list is: ";
    list.print();
    list.push_back(5);
    std::cout << "after push_back(5): ";
    list.print();
    list.push_front(6);
    std::cout << "after push_front(6): ";
    list.print();
    ListNode *k = list.GetIthPointer(4);
    list.insert_after(k, 4);
    std::cout << "after insert_after 4th pointer: ";
    list.print();
    list.erase(k);
    std::cout << "after erase 4th pointer: ";
    list.print();
    list.pop_back();
    std::cout << "after pop_back: ";
    list.print();
    std::cout << "list's front is: " << list.front() << std::endl;
    std::cout << "list's back is: " << list.back() << std::endl;
    std::cout << "list is empty: "<< list.empty() << std::endl;
    std::cout << "list's size is: "<< list.size() << std::endl;
    std::cout << "GetBackPointer: " << list.GetBackPointer()->val << std::endl;
    std::cout << "Get3thPointer: " << list.GetIthPointer(3)->val << std::endl;


    return EXIT_SUCCESS;
}