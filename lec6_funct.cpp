# include<stdio.h>
//  procedural programming if broken into function

int add(int a, int b){    // a and b are called formal parameter
    int c ;               // value of x and y are copied here
    c = a+b;
    return c;
}


int main(){

    int x,y,z;
    x=10;
    y=5;
    z = add(x,y);    // x and y are actual parameter
    printf("%d\n", z);
    return 0;
}