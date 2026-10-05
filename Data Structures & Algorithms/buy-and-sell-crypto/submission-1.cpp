class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int sellPrice = 0;
       int currPrice = prices[0];
       for(auto I: prices ){
        if(I <=currPrice) currPrice = I;
        else{
            sellPrice = max(sellPrice,I - currPrice);
        }
       }
       return sellPrice;
    }
};
