void findpermutations(int index, string& s, vector<string>& answer) {
    if(index == s.size()){
        answer.push_back(s);
        return;
    }
    
    for(int i = index; i < s.size(); i++ ){
        swap(s[index], s[i]);
        findpermutations(index + 1, s, answer);
        swap(s[index], s[i]);
    }
}

vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> answer;
    int index = 0;
    
    findpermutations(index, s, answer);
    return answer;
}
