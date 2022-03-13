class Solution{
    public:
    void solve(int i, int j, vector<vector<int>> &m, int n,vector<string> &str, string temp, vector<vector<int>> &vis){
        if(i==n-1 && j==n-1){
            str.push_back(temp);
            return;
        }
        
        // Downward
        if(i+1<n && !vis[i+1][j] && m[i+1][j]==1){
            vis[i][j]=1;
            solve(i+1,j,m,n,str,temp+"D",vis);
            vis[i][j]=0;
            
        }
        
        // leftward
        if(j-1>=0 && !vis[i][j-1] && m[i][j-1]==1){
            vis[i][j]=1;
            solve(i,j-1,m,n,str,temp+"L",vis);
            vis[i][j]=0;
        }
        
        // Rightward
        if(j+1<n && !vis[i][j+1] && m[i][j+1]==1){
            vis[i][j]=1;
            solve(i,j+1,m,n,str,temp+"R",vis);
            vis[i][j]=0;
        }
        
        // Upward
        if(i-1>=0 && !vis[i-1][j] && m[i-1][j]==1){
            vis[i][j]=1;
            solve(i-1,j,m,n,str,temp+"U",vis);
            vis[i][j]=0;
        }
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector <string> str;
        vector<vector<int>> vis(n,vector<int> (n,0));
        if (m[0][0]==1)   solve(0,0,m,n,str,"",vis);
        return str;
        
    }
};