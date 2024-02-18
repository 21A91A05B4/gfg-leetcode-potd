void dfs(int node,vector<int>ad[],vector<int>&vi){
        vi[node]=1;
        for(auto it:ad[node]){
            if(!vi[it]){
                dfs(it,ad,vi);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        int c=0;
        vector<int>ad[V+1];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1 and i!=j){
                    ad[i].push_back(j);
                    ad[j].push_back(i);
                }
            }
        }
        vector<int>vi(V+1,0);
        for(int i=0;i<V;i++){
                if(!vi[i]){
                    c+=1;
                    dfs(i,ad,vi);
                }
        }
        return c;
    }
