#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    
    int slow = arr[0];
    int fast = arr[arr[0]];
    
     // here we are finding the first collision
    while(slow != fast) {
        slow = arr[slow];
        fast = arr[arr[fast]];
    }
    
    slow = 0;
    
    // setting the slow pointer to start
    // here we are finding the second collision
    // which is nothing but the duplicate number
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    
    return slow;
}
