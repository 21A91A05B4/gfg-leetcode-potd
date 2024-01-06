class Solution {
public:
    int prime(int n){
        map<int,int>mpp;
        for(int i=2;i<=sqrt(n);i++){
            while(n%i==0 and n>0){
                mpp[i]++;
                n=n/i;
            }
        }
        if(n!=1){
            mpp[n]++;
        }
        int c=0;
        for(auto it:mpp){
            c+=it.second;
        }
        return c; 
    }
	int sumOfPowers(int a, int b){
	    int ans=0;
	    for(int i=a;i<=b;i++){
	        ans+=prime(i);
	        //cout<<ans<<" ";
	    }
	    return ans;
	}
};