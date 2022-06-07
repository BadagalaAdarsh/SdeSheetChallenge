#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    pair<int,int>ans;

    int i=0;

    while(i<n){

        if(arr[i]!=arr[arr[i]-1]){

           swap(arr[i],arr[arr[i]-1]);

       }

       else

           i++;

   }

   for(int i=0;i<n;i++){

       if(arr[i]!=i+1){

          ans.first=i+1;

           ans.second=arr[i];

       }

    }

   return ans;
    
}


  



 
