class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=1;
        if(prices.size()>=2){
           int max=prices[1],min=prices[0],minin=0,maxin=1;
        int profit=prices[1]-prices[0];
        for(i=0;i<prices.size()-1;i++){
                if(prices[i]<=min){
                    min=prices[i];
                    minin=i;
                }
                if(prices[j]>=max){
                    max=prices[j];
                    maxin=j;
                }
                if(profit<prices[j]-min && j>maxin){
                    profit=prices[j]-min;
                }
                if(profit<(max-min) && maxin>minin)
                {
                    profit=max-min;
                }
            
            j++;
        }
        if(profit<=0){
            return 0;
        }else{
            return profit;
        } 
        }else{
            return 0;
        }
        
        
    }
};
