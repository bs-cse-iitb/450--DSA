int countBitsFlip(int a, int b){

    // Your logic here
    int xor1 = a^ b;
    int c=0;
    while(xor1){
        if(xor1%2==1)    c++;
        xor1/=2;
    }
    return c;
}