#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    map<int,int> freq;
    int count = 0;
    int xorr = 0;
    int n = arr.size();
    
    for(int i = 0; i < n; i++){
        xorr ^= arr[i];
        if(xorr == x) count++;
        
        if(freq.find(xorr ^ x) != freq.end())
            count += freq[xorr ^ x];
        
        freq[xorr] += 1;
    }
    
    return count;
}
