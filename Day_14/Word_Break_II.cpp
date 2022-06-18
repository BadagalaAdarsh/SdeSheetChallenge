void words(string &s, int start, vector<string>& dictionary, vector<string>& answer, string& current) {
    
    if(start >= s.size()) {
        answer.push_back(current);
        return;
    }
    
    for(int i = start; i < s.size(); i++) {
        string tmp = s.substr(start, i - start + 1) ;
        
        bool isPresent = false;
        for(string st: dictionary) {
            if(st.compare(tmp) == 0) {
                isPresent = true;
                break;
            }
        }
        
        if(isPresent) {
            string x = current;
            
            current += tmp + " ";
            
            words(s, i + 1, dictionary, answer, current) ;
            
            current = x;
        }
    }
}

vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Write your code here
    
    vector<string> answer;
    string current;
    
    words(s, 0, dictionary, answer, current);
    
    return answer;

}
