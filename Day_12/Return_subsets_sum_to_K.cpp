void find(int idx, int n, int k, vector<int>& arr, vector<int>& ds, vector<vector<int>>& answer) {
    
    if(idx == n) {
        if(k == 0) {
            answer.push_back(ds);
            
        }
        return;
    }
    
    else {
        ds.push_back(arr[idx]);
        find(idx + 1, n, k - arr[idx], arr, ds, answer);
        
        ds.pop_back();
        
        find(idx + 1, n, k, arr, ds, answer);
    }
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    
    vector<int> ds;
    vector<vector<int>> answer;
    find(0, n, k, arr, ds, answer);
    
    return answer;
}
