#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int>* reverse(LinkedListNode<int>* head) {
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* prev = NULL;
    
    while(curr != NULL) {
        LinkedListNode<int>* n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    
    return prev;
}


bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head == NULL){
        return true;
       }
    LinkedListNode<int>* slow = head;
    LinkedListNode<int>* fast = head->next;
    
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    LinkedListNode<int>* newh = slow->next;
    slow->next = NULL;
    
    newh = reverse(newh);
    LinkedListNode<int>* temp = head;
    while(newh != NULL && temp != NULL){
        if(temp->data != newh->data){
            return false;
        }
        
        newh = newh->next;
        temp = temp->next;
    }
    
    return true;

}
