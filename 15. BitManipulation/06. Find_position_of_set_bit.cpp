int findPosition(int N) {
    // code here
    int c=0;
    if(N==0)  return -1;
    while(N){
        if(N==1)  return c+1;
        if(N%2==1)  return -1;
        c++;
        N/=2;
    }
}