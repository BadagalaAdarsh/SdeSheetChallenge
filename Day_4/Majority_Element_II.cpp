#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &nums)
{
    // Write your code here.
    int sz = nums.size();
    int num1 = -1, num2 = -1, count1 = 0, count2 = 0;
    
    for(int i = 0; i < sz; i++) {
        if(nums[i] == num1) count1++;
        else if (nums[i] == num2) count2++;
        else if (count1 == 0) {
            num1 = nums[i];
            count1++;
        }
        else if (count2 == 0){
            num2 = nums[i];
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }
    
    vector<int> answer;
    count1 = count2 = 0;
    
    for(int i = 0; i < sz; i++) {
        if(nums[i] == num1) count1++;
        else if(nums[i] == num2) count2++;
        
    }
    
    if(count1 > sz/3){
        answer.push_back(num1);
    }
    if(count2 > sz/3) {
        answer.push_back(num2);
    }
    return answer;

}
