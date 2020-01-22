// structure is user-assigned data type

# include <stdio.h>

struct Rectangle{
    int length;      // 2 bytes for int
    int bredth;       // 2 bytes for int total 4 byts
};


int main(){

    struct Rectangle r;   // just declaration
    struct Rectangle r1 ={10,5};   // assignment and declaration

    r.length = 15;
    r.bredth = 10;

    printf("%d \n", r.length);
    printf("Area is %d \n", r.length*r.bredth);

    return 0;
}