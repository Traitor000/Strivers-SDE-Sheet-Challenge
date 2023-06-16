class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int cost=prices[0];
        for(int i=0;i<prices.size();i++){
            if(cost>prices[i]){
                cost=prices[i];
            }
            maxp=max(maxp,prices[i]-cost);
        }
        return maxp;

    }
};