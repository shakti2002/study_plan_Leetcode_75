class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int rsum = 0;
        for(int i : nums){
            rsum += i;
        } 
        int lsum = 0;
        for(int i = 0; i < n; i++){
            rsum -= nums[i];

            if(rsum == lsum){
                return i;
            }

            lsum += nums[i];
        }
        return -1;
    }
};
