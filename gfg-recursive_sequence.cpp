class Solution{
public:
   long long  m=1e9+7;
    long long sequence(int n){
        vector<int>v;
        int i=1,s=0,c=1;
        while(i<=n)
        {
            v.push_back(c);
            c+=1;
            if(v.size()==i)
            {
                int p=1;
                for(auto it:v)
                {
                    p=((p%m)*(it%m))%m;
                    //cout<<it<<" ";
                }
                //cout<<endl;
                s=((s%m)+(p%m))%m;
                i+=1;
                v={};
            }
        }
        return s%m;
    }
};
