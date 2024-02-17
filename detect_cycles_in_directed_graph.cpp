bool dfs(int node,vector<int>&vi,vector<int> adj[],vector<int>&path){
        vi[node]=1;
        path[node]=1;
        for(auto it:adj[node]){
            if(path[it]) return true;
            if(!vi[it]){
                if(dfs(it,vi,adj,path)) return true;
            }
        }
        path[node]=0;
        return false;
        
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vi(V+1,0);
        vector<int>path(V+1,0);
        for(int i=0;i<V;i++){
            if(!vi[i]){
                if(dfs(i,vi,adj,path)) return 1;
            }
        }
        return 0;
