class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int count=0;
    for(int j=0;j<nums.size();j++)
    {
        int sum=0;
       for(int t = j; t < nums.size(); t++)
    {
            sum+=nums[t];
    if(sum==k)
    count++;
    }
    }
    cout<<count;
    return count;
    }
};