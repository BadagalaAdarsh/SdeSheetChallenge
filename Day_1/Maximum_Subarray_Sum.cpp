#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    
    long long answer = 0;
    long long temp = 0;
    
    for(int i = 0; i < n; i++) {
        
        temp += arr[i];
        answer = max(answer, temp);
        temp = max((long long)0, temp);
        
    }
    
    return answer;
}
