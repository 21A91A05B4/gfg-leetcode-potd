class Solution {
public:
int dp[501];
    int fun(vector<int>&arr,int k,int i,int n){
        if(i==n)return 0;
        if(dp[i]!=-1) return dp[i];
        int ans=INT_MIN,len=0,maxi=INT_MIN;
        int sum=0;
        for(int j=i;j<min(n,i+k);j++){
            len++;
            maxi=max(maxi,arr[j]);
            sum=(len*maxi)+fun(arr,k,j+1,n);
            ans=max(ans,sum);
        }
        return dp[i]=ans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        memset(dp,-1,sizeof(dp));
        return fun(arr,k,0,n);
    }
};
