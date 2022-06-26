void sortedInsert(stack<int> &s, int num){
    //base case => stack empty/ chota element mil jayega
    if(s.empty() || (!s.empty() && s.top() <num )){
        //seg fault de skta hai 2nd condn
        //seedhe push kar do
        s.push(num);
        return;
    }
    //aage bado to no. ko side me rakh rahe
    int n = s.top();
    s.pop();	//side me
    
    //rec call
    sortedInsert(s,num);
    //wapas jate hue n ko lete jao jo side me rakha tha
    s.push(n);
    
}
void sortStack(stack<int> &s)
{
	//base case
    if(s.empty()){
        //wapas aa jana hai
        return;
    }
    //aage jao to upar wala side me rakho
    int num = s.top();
    s.pop();	//side me
    
    //rec call
    sortStack(s);
    
    //wapas aao jab do sortedInsert
    sortedInsert(s,num);
}
