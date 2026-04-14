class Solution {
public:
    void dfs(int i, int j, vector<vector<char>>& grid,int n, int m){
        grid[i][j]='0';
        int dx[4] = {-1,0,1,0};
        int dy[4] = {0,1,0,-1};

        for(int d = 0;d<4;d++){
            int nx = i+dx[d];
            int ny = j+dy[d];

            if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]=='1'){
                grid[nx][ny] = '0';
                dfs(nx,ny,grid,n,m);
            }
        }

    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,grid,n,m);
                    count++;
                }
            }
        }
        return count;
        
    }
};
