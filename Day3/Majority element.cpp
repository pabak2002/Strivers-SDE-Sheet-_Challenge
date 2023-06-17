#include <algorithm>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int n = nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int ans = 0;
        int ans2 = 0;
        for(auto i: m){
            if(i.second>ans2){
                ans2 = i.second;
                ans = i.first;
            }

        }
        return ans;
    }
};