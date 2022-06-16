string kthPermutation(int n, int k) {
    // Write your code here.\
    
    vector<int> array;
    string answer = "";
    int fact = 1;
    
    for(int i = 1; i < n; i++) {
        fact *= i;
        array.push_back(i);
    }
    
    array.push_back(n);
    k--;
    
    while(true) {
        answer = answer + to_string(array[k/fact]);
        array.erase(array.begin() + k/ fact);
        
        if(array.size() == 0) {
            break;
        }
        
        k = k % fact;
        fact = fact / array.size();
        
    }
    
    return answer;
}
