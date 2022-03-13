vector<int> valueEqualToIndex(int arr[], int n) {
    // code here
    vector<int> vt;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==i+1)
            vt.push_back(i+1);
    }
    return vt;
}