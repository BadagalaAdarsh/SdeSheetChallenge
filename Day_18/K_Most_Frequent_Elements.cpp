#include<bits/stdc++.h>
using namespace std;
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    vector<int> ans;
    map<int, int> mp;
    for (auto i : arr)
    {
        mp[i]++;
    }
    vector<pair<int, int>> cnts;
    for (auto i : mp)
    {
        cnts.push_back(make_pair(i.second, i.first));
    }
    sort(cnts.begin(), cnts.end(), [](pair<int, int> a, pair<int, int> b) {return a.first > b.first;});
    for (int i = 0; i < min(k, n); i++)
    {
        ans.push_back(cnts[i].second);
    }
    sort(ans.begin(), ans.end());
    return ans;
}
