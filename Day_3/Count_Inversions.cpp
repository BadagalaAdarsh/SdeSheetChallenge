#include <bits/stdc++.h> 

void merge(long long *arr, long long *temp, int start, int mid, int end, long long int &x) {
    
    int i = start;
    int j = mid + 1;
    int k = start;
    
    while ( i <= mid && j <= end) {
        if(arr[i] <= arr[j]) 
            temp[k++] = arr[i++];
        
        else {
            temp[k++] = arr[j++];
            x += (mid - i + 1) ;
        }
    }
    
    while(i <= mid) 
        temp[k++] = arr[i++];
    
    while( j <= end) 
        temp[k++] = arr[j++];
    
    for(int i = start; i <= end; i++) 
        arr[i] = temp[i];
}

void mergesort(long long *arr, long long *temp, int start, int end, long long int& x) {
    
    if(start >= end) return;
    
    int mid = start + (end - start) / 2;
    mergesort(arr, temp, start, mid, x);
    mergesort(arr, temp, mid + 1, end, x);
    merge(arr, temp, start, mid, end, x);
    
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    
    long long int count = 0;
    long long temp[n];
    
    mergesort(arr, temp, 0, n -1, count);
    return count;
}
