class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0;
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            maxi=max(maxi,s);
            if(s<0)
            s=0;
        }
        return maxi;
    }
};