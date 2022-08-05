class Solution {
    public int maxProfit(int[] prices) {
        int maxProfit = 0;
        int index = 0;
        int buy = prices[0];
        
        while (index < prices.length) {
            if (buy < prices[index]) {
                maxProfit = Math.max(maxProfit, (prices[index]-buy));
            } else {
                buy = prices[index];
            }
            index++;
        }
        
        return maxProfit;
    }
}