class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;int diff=0;
        int mini=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<mini)
            mini=prices[i];
            diff=prices[i]-mini;
            maxprofit=max(maxprofit,diff);
        }
        return maxprofit;
    }
};