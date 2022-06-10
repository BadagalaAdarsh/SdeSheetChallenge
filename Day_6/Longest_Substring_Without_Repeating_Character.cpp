#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    vector<int> freqChar(26, 0);
    
    int maxLength = 1;
    int i = 0, j = 0, n = input.size();
    
    while ( j < n) {
        if (freqChar[input[j] - 'a'] == 0) {
            freqChar[input[j] - 'a'] = 1;
        }
        else {
            maxLength = max(maxLength, j - i);
            
            while(i <= j && freqChar[input[j] - 'a'] > 0) {
                freqChar[input[i] - 'a'] = 0;
                i++;
            }
            freqChar[input[j] - 'a'] = 1;
        }
        j++;
    }
    
    maxLength = max(maxLength, j - i);
    return maxLength;
}
