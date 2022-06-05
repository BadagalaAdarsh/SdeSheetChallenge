#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> answer;
    
    for(int i = 0; i < n; i++) {
        
      // below vector is to store the individual row values 
        vector<long long int> row(i + 1);
      // initializing first and last value of each vector to be 1 as present in the triangle
        row[0] = row[i] = 1;
        
        for(int j = 1; j < i; j++) {
          // starting the loop from 1st index and filling the triangle from the first row
          // based on the previous row values
            row[j] = answer[i-1][j-1] + answer[i - 1][j];
        }
        
        answer.emplace_back(row);
    }
    
    return answer;
}
