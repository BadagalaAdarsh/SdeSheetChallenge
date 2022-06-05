#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    
    int min_price = INT_MAX;
    int max_profit = 0;
    
    int n = prices.size();
    
    for(int i = 0; i < n; i++) {
        
        if (prices[i] < min_price){
            min_price = prices[i];
        }
        
        max_profit = max(max_profit, prices[i] - min_price);
    }
    
    return max_profit;
}
