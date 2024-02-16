class Solution {
public:

    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        map<int,int>mpp;
        //if(arr.size()==1 and k==1) return 0;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        vector<int>freq;
        for(auto it:mpp){
            freq.push_back(it.second);
        }
        sort(freq.begin(),freq.end());
        int c=0;
        cout<<endl;
        for(int i=0;i<freq.size();i++){
            if(freq[i]>k or k==0){
                int c=0;
                for(auto k1:freq){
                    if(k1!=-1){
                        c++;
                    }
                }
                return c;
            }
            k=k-freq[i];
            freq[i]=-1;
        }
        int p=0;
        for(auto it:freq){
            if(it==-1) p++;
        }
        if(p==freq.size()) return 0;
        return freq.size();
    }
};
