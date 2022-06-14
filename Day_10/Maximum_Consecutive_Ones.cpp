int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int j = -1;
    int zeroCount = 0;
    int answer = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            zeroCount++;
        }
        
        while(zeroCount > k){
            j++;
            if(arr[j] == 0) {
                zeroCount--;
            }
        }
        
        int len = i - j;
        if(len > answer)
            answer = len;
    }
    
    return answer;
}
