#include<bits/stdc++.h>

int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    vector<int> answer;
    
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[0].size(); j++) {
            answer.push_back(matrix[i][j]);
        }
    }
    
    sort(answer.begin(), answer.end());
    int m = answer.size() / 2;
    int x = answer[m];
    
    return x;
}
