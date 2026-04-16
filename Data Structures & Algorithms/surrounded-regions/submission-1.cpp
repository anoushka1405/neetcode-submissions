class Solution {
public:
    void dfs(int i, int j, vector<vector<char>>& board, int n, int m){
        board[i][j] = '#';

        int dx[4] = {0,-1,0,1};
        int dy[4] = {-1,0,1,0};

        for(int d = 0;d<4;d++){
            int nx = i+dx[d];
            int ny = j+dy[d];

            if(nx>=0 && ny>=0 && nx<n && ny<m && board[nx][ny]=='O'){
                dfs(nx,ny,board,n,m);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        for(int i = 0;i<n;i++){
            if(board[i][0]=='O')dfs(i,0,board,n,m);
            if(board[i][m-1]=='O')dfs(i,m-1,board,n,m);
        }
        for(int j = 0;j<m;j++){
            if(board[0][j]=='O')dfs(0,j,board,n,m);
            if(board[n-1][j]=='O')dfs(n-1,j,board,n,m);
        }

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(board[i][j]=='O')board[i][j] = 'X';
                if(board[i][j]=='#')board[i][j] = 'O';
            }
        }
        
    }
};