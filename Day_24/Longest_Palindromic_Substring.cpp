void expand(string s, int l,int r, string &ans, int & ansLen) {
    while(l>=0 && r<s.length() && s[l]==s[r]) {
        if(r-l+1 > ansLen) {
            ansLen = r - l + 1;
            ans = s.substr(l, ansLen);
        }
        l--; r++;
    }
} 
string longestPalinSubstring(string str)
{
    // Write your code here.
    string ans="";
    int ansLen=0;
    int n=str.length();
    for(int i=0;i<n;i++) {
        // for odd length
        expand(str,i,i,ans,ansLen);
        // for even length
        expand(str,i,i+1,ans,ansLen);
    }
    return ans;
}
