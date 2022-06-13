int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
    
    int count = 0;
    
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i - 1]) count++;
        else arr[i - count] = arr[i];
    }
    
    return n - count;
 
}
