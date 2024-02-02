class Solution {
public:
    int dp[1000000];
    long long fun(vector<int>&coins,int target){
        if(target<=0) return 0;
        
        if(dp[target]!=-1) return dp[target];
        long long int ans=INT_MAX;
        for(int i=0;i<coins.size();i++){
            if(coins[i]<=target){
                ans=min(ans,1+fun(coins,(target-coins[i])));
            }
        }
        return dp[target]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        
        memset(dp,-1,sizeof(dp));
        if(coins.size()==1 and  (amount%coins[0]!=0)) return -1;
        if(amount==0) return 0;
        int h= fun(coins,amount);
        
        if(h==INT_MAX){
            return -1;
        }
        return h;
    }

};
