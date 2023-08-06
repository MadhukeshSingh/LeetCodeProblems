class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int roundedAmount = (purchaseAmount + 9) / 10 * 10;
        if (roundedAmount - purchaseAmount > purchaseAmount - (roundedAmount - 10)) {
            roundedAmount -= 10;
        }
        int initialBalance = 100;
        return initialBalance - roundedAmount;
    }
};