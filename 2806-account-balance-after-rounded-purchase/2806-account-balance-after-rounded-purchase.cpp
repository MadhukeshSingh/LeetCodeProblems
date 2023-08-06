class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int x = purchaseAmount % 10;
        int y = 10 - x, c = 0;
        if(x < y)
            c = purchaseAmount - x;
        else
            c = purchaseAmount + y;
        return (100 - c);
    }
};