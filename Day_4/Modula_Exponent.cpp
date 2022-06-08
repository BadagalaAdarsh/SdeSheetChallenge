#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    int answer = 1;
    while(n) {
        if(n&1){
            answer = (1LL * answer * (x) % m);
        } 
        x = 1LL * (x) % m * (x) % m; 
        n >>= 1;
    }
    
    return answer;
    
}
