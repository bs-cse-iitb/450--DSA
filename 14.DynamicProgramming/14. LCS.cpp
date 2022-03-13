int lcs(int m, int n, string x, string y)
{
    // your code here
    

    int i,j;
    int arr[m+1][n+1];

    // inistialize zero
    for(i =0; i< m+1; i++){
        for(j=0; j<n+1;j++){
                arr[i][j]=0;
        }
    }


    // DP using tabular approach
    for(i =1; i< m+1; i++){
        for(j=1; j<n+1;j++){
            //cout<<arr[i][j]<< " ";
            //cout<<x[i-1]<<y[j-1];
            if(x[i-1]==y[j-1]){
                arr[i][j]=arr[i-1][j-1]+1;
            }
            else{
                arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
            }
        }
    }

    return arr[m][n];
}