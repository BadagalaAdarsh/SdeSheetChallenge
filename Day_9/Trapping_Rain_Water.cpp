#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    
    long leftMax = 0, rightMax = 0;
    
    int i = 0, j = n - 1;
    long sum = 0;
    
    while(i < j) {
        leftMax = max(leftMax, arr[i]);
        rightMax = max(rightMax, arr[j]);
        
        if(leftMax < rightMax) {
            sum += (leftMax - arr[i]);
            i++;
        }
        
        else{
            sum += (rightMax - arr[j]);
            j--;
        }
    }
    
    return sum;
}
