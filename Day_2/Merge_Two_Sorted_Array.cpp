#include <bits/stdc++.h> 

int find_gap(int n) {
    
    if (n == 1) return 0;
    else
        return (n + 1) / 2;
}
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    
    int gap = find_gap( m + n );
    
    for(int i = 0; i < n; i++) {
        arr1[m + i] = arr2[i];
    }
    
    while(gap) {
        int start = 0;
        int end = gap;
        
        while(end < m + n) {
            if(arr1[start] > arr1[end])    
                swap(arr1[start], arr1[end]);
            
            start++;
            end++;
        }
        
        gap = find_gap(gap);
    }
    
    return arr1;
}
