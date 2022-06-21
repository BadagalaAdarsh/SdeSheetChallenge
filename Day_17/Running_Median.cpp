#include<bits/stdc++.h>
class MedianFinder {
public:
     priority_queue<int> maxq ;
    priority_queue<int, vector<int>, greater<int>> minq ;
    
    MedianFinder()
    {
        
    }
    
    void addNum(int num) 
    {
        maxq.push(num);
        minq.push(maxq.top());
        maxq.pop();
        if(maxq.size()<minq.size())
        {
            maxq.push(minq.top());
            minq.pop();
        }
    }
    
    int findMedian() 
    {
         if(maxq.size()>minq.size())
        {
            return maxq.top();
        }
        else
        {
            return (maxq.top()+minq.top())/2;
        }
    }
};
void findMedian(int *arr, int n)
{
    MedianFinder* obj = new MedianFinder();
  
//     MedianFinder m;
    for(int i=0;i<n;i++)
    {
       obj->addNum(arr[i]);
      cout<<obj->findMedian()<<" ";
    }
}
