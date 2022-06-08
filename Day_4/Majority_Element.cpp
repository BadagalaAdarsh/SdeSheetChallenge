#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    
    int count = 0;
    int element = 0;
    
    for(int i = 0; i < n; i++) {
        int num = arr[i];
        
        if(count == 0) element = num;
        
        if (num == element) count++;
        else count--;
    }
    
    count = 0;
    for(int i = 0; i < n; i++) {
        int num = arr[i];
        if(num == element) count++;
    }
    
    if(count <= n/2) return -1;
    
    return element;
}

