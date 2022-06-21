#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
int kthsmallest=0;
int kthlargest=0;
priority_queue<int>maxheap;
priority_queue<int,vector<int>,greater<int>>minheap;

for(int i=0;i<k;i++){
 maxheap.push(arr[i]);
}
for(int i=k;i<n;i++){
 if(arr[i]<maxheap.top()){
  maxheap.pop();
  maxheap.push(arr[i]);
 }
}
kthsmallest=maxheap.top();

for(int j=0;j<k;j++){
 minheap.push(arr[j]);
}
for(int j=k;j<n;j++){
 if(arr[j]>minheap.top()){
  minheap.pop();
  minheap.push(arr[j]);
 }
}
kthlargest=minheap.top();
vector<int>ans(2);
ans[0]=kthsmallest;
ans[1]=kthlargest;
return ans;

// Write your code here.
}
