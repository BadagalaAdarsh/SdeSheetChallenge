#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    
    if(mat.size() == 0 || mat[0].size() == 0) return false;
    
    int start = 0;
    int rows = mat.size();
    int cols = mat[0].size();
    int end = rows * cols - 1;
    
    while(start <= end) {
        int mid = (start + end) / 2;
        
        if(mat[mid/cols][mid % cols] == target) return true;
        
        if(mat[mid / cols][mid % cols] < target) 
            start = mid + 1;
        else
            end = mid - 1;
    }
    
    return false;
    
}
