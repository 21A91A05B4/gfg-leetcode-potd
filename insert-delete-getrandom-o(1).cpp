class RandomizedSet {
public:
vector<int>v;
unordered_map<int,int>mp;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp[val]==0){
            v.push_back(val);
            mp[val]=1;
            return true;
        }
        else{
            return false;
        }
    }
    
    bool remove(int val) {
        if(mp[val]==0){
            return false;
        }
        else{
            auto it=find(v.begin(),v.end(),val);
            v.erase(it);
            mp[val]=0;
            return true;
        }
    }
    
    int getRandom() {
        int g=(rand()%v.size());
        return v[g];
    }
};