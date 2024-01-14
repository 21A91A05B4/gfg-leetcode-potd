class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>mp1;
        map<char,int>mp2;
        vector<int>v;
        vector<int>v1;
        for(int i=0;i<word1.size();i++){
            mp1[word1[i]]++;
        }
        for(auto it:mp1){
            v.push_back(it.second);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<word2.size();i++){
            mp2[word2[i]]++;
        }
        for(auto it:mp2){
            v1.push_back(it.second);
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<word2.size();i++){
            if(mp1.find(word2[i])==mp1.end()){
                return false;
            }
        }
        if(v!=v1){
            return false;
        }
        else{
            return true;
        }
    }
};