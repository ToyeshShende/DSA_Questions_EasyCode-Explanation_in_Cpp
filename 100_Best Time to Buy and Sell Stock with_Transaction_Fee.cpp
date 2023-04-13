class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int effectivebuy=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++){
            profit=max(profit,prices[i]-effectivebuy-fee);
            effectivebuy=min(effectivebuy,prices[i]-profit);
        }
        return profit;
    }
};


