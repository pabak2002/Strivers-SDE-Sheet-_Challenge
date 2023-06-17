class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>m;
        vector<int> v;
        int n = nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto i: m){
            if(i.second>n/3){
                v.push_back(i.first);
            }

        }
        return v;
    }
};