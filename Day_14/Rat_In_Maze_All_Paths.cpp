vector<vector<int>>ans;
void solve(vector<vector<int>>&maze,int i,int j,int n,vector<vector<int>>&p)
{    
    if(i==n-1 and j==n-1)
    {
        p[i][j]=1;
        vector<int>tmp;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                tmp.push_back(p[i][j]);
        ans.push_back(tmp);
        return;
    }
    if(i<0 or j<0 or i>=n or j>=n or p[i][j]==1 or maze[i][j]==0)
        return;
    p[i][j]=1;
    solve(maze,i+1,j,n,p);
    solve(maze,i-1,j,n,p);
    solve(maze,i,j+1,n,p);
    solve(maze,i,j-1,n,p);
    p[i][j]=0;
}




vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  // Write your code here.
    vector<vector<int>>path(n,vector<int>(n,0));
    solve(maze,0,0,n,path);
    return ans;
}
