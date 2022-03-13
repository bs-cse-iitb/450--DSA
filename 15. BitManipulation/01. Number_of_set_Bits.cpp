int setBits(int N) {
    // Write Your Code here
    int c=0;
    while(N){
        if(N%2==1)   c++;
        N=N/2;
    }
    return c;
}