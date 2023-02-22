class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>vec(nums.size(),0);
        if(nums.size()==0)
            return vec;
        if(nums.size()==1)
        {
            return nums;
        }
        vec[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            vec[i]=vec[i-1]+nums[i];
        }
        return vec;
    }
};
