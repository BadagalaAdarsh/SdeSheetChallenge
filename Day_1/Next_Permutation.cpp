vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    
    // find the first element that is smaller than its next element
    int i = n - 2;
    while( i >= 0 && permutation[i] > permutation[i + 1])
        i--;
        
       
    // if no such element exist, then the array is already in descending order
    if ( i >= 0) {
        int j = n - 1;
        // find the first element that is greater than permutation[i]
        while( j >= 0 && permutation[j] <= permutation[i] )
            j--;
        
        // swap permutation[i] and permutation[j]
        swap(permutation[i], permutation[j]);
    }
    
    
    // reverse the array from permutation[i + 1] to the end of the array
    reverse(permutation.begin() + i + 1, permutation.end());
    
    return permutation;
}
