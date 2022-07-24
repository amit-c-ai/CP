class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size(), buy_value=prices[0], profit=0;
        for(int i=0; i<len; i++){
            if(prices[i]<buy_value){
                buy_value = prices[i];
            }
            if(prices[i]-buy_value > profit){
                profit = prices[i]-buy_value;
            }
        }
        return profit;
    }
};
