bool fun(int node,int parent,vector<int> adj[],vector<int>&vi){
        vi[node]=1;
        for(auto it:adj[node]){
            if(!vi[it]){
                if(fun(it,node,adj,vi)) return true;
            }
            else if(it!=parent){
                return true;
            }
        }
    }
    bool isCycle(int V, vector<int> adj[]) 
    {
        vector<int>vi(V+1,0);
        for(int i=0;i<V;i++)
        {
            if(!vi[i]){
                if(fun(i,-1,adj,vi)==true) return true;
            }
            
        }
        return false;
    }
