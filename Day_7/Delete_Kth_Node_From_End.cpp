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

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    // Write your code here.
    
    if(head == NULL || K == 0) return head;
    int n = 0;
    LinkedListNode<int>* cur = head;
    
    while(cur != NULL) {
        n++;
        cur = cur->next;
    }
    
    K = n - K;
    cur = head;
    LinkedListNode<int>* prev = NULL;
    
    while(K > 0) {
        prev = cur;
        cur = cur -> next;
        K--;
    }
    
    if(prev!=NULL) {
        prev->next = cur->next;
    }
    else{
        head = head->next;
    }
    return head;
}
