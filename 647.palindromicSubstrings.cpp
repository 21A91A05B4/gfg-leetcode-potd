class Solution {
public:
    int palin(string s){
        string s1=s;
        reverse(s.begin(),s.end());
        if(s==s1) return 1;
        return 0;
    }
    int countSubstrings(string s) {
        int c=0;
        for(int i=0;i<s.size();i++){
            string s1;
            for(int j=i;j<s.size();j++){
                s1+=s[j];
                if(palin(s1)==1){
                    c++;
                }
            }
        }
        return c;

    }
};
