class Solution {
public:
long long power(long long a,long long b){
        long long res=1;
        long long const mod=1e9+7;
        while(b){
            if(b&1){
                b=b-1;
                res=res%mod*a%mod;
            }
            else{
                b=b/2;
                a=(a%mod*a%mod);
                a%mod;
            }
        }
        return res%mod;
}
    int countGoodNumbers(long long n) {
        long long m=1e9+7;
        long long a,b,f;
        if(n==1){
            return 5;
        }
        if(n%2==0)
        {
            a=(n/2);
            f=((power(5,a))*(power(4,a)))%m;
        }
        else{
            a=(n/2);
            b=(n/2)+1;
            f=((power(4,a))*(power(5,b)))%m;
        }
        return f;
    }
};
