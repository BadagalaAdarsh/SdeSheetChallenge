bool isValidParenthesis(string expression)
{
    // Write your code here.
    string temp = "";
    int n=expression.length();
    for(int i=0;i<n;++i)
    {
        if(expression[i]=='{' || expression[i]=='(' || expression[i]=='[' )
            temp.push_back(expression[i]);
        else
        {
            if((temp.back() == '{' && expression[i] == '}') || (temp.back() == '(' && expression[i] == ')') || (temp.back() == '[' && expression[i] == ']'))
                temp.pop_back();
            else
                return 0;
        }    
    }
    if(temp.length()==0)
        return 1;
    return 0;
}
