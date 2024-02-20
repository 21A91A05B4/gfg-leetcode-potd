int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        int vis[n][m];
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    vis[i][j]=1;
                    q.push({{i,j},0});
                }
                else{
                    vis[i][j]=0;
                }
                if(grid[i][j]==1) c++;
                
            }
        }
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        int c1=0;
        int maxi=0;
        while(!q.empty()){
            int a=q.front().first.first;
            int b=q.front().first.second;
            int t=q.front().second;
            maxi=max(maxi,t);
            q.pop();
            for(int j=0;j<4;j++){
                int a1=a+drow[j];
                int b1=b+dcol[j];
                if(a1<n and a1>=0 and b1<m and b1>=0 and grid[a1][b1]==1){
                    if(!vis[a1][b1]){
                        q.push({{a1,b1},t+1});
                        vis[a1][b1]=1;
                        c1++;
                    }
                }
                
            }
            
        }
        if(c!=c1) return -1;
        return maxi;
        
    }
};
