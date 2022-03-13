class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        int i,j,k,l,m;
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
               
                if(grid[i][j]==0){
                    for(k=1;k<=9;k++){
                        if (isValid(grid,i,j,k)){
                            grid[i][j]=k;
                            //cout<<grid[i][j]<<endl;
                            if(SolveSudoku(grid))  
                                return true;
                            else                    
                                grid[i][j]=0;
                        }
                    }
                    
                    return false;
                    
                }
               
            }
        } return true;
    }
    
    bool isValid(int grid[N][N],int i, int j, int k){
        int l;
        for(l=0;l<9;l++){
            if(grid[i][l]==k)       return false;
            if(grid[l][j]==k)    return false;
            if(grid[3*(i/3)+l/3][3*(j/3)+l%3]==k)  return false;
        }
        /*
        int p,q;
        int m = i/3, n= j/3;
        for(p=0;p<3;p++){
            for(q=0;q<3;q++){
                if(grid[m+p][n+q]==k)   return false;
            }
        }
        */
        
        return true;
        
    }
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        int i,j;
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                cout<<grid[i][j]<<" ";
            }
        }
    }
};