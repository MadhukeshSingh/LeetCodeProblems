class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int buy = 0;
        int notBuy = 0;
        int nowBuy, nowNotBuy;
        int n = prices.size();
        for (int i = n-1; i>=0 ; i--){
            nowNotBuy = max(prices[i] - fee + buy , 0 + notBuy);
            nowBuy = max(-prices[i] + notBuy , 0 + buy);
            
            buy = nowBuy;
            notBuy = nowNotBuy;
        }
        return buy;
    }
};