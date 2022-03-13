vector<int> find(int arr[], int n , int x )
{
    // code here
    int bs(int arr[], int u , int x);
    int pos = bs(arr,n,x);
    int i,j;
    if (pos==-1)
        return{-1,-1};
    i=j=pos;
    
    while(arr[++i]==x);
    while(arr[--j]==x);
    
    return {j+1,i-1};
    
}

// implementation of Binary Search
int bs(int arr[], int u , int x){
    int mid, l = 0;
    while(l<=u){
        mid = (l+u)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]<x)
            l=mid+1;
        else
            u = mid-1;
    }
    return -1;
}