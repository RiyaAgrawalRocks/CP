#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            int comp=target-nums[i];
            if(umap.find(comp)!=umap.end())
            {
                v.push_back(i);
                v.push_back(umap.at(comp));
                return v;
            }
            else
            umap[nums[i]]=i;
        }
        return v;

    }
};