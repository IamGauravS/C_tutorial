#include<stdio.h>
 
// if an array is there in struct then we can pass that array in struct

struct Rectangle{
    int length;
    int bredth;
};

void changelength(struct Rectangle *r, int l){
    r->length = l;
}


int area(struct Rectangle r1){
    return r1.bredth*r1.length;
}



int main(){
    struct Rectangle r={10,5};
    changelength(&r,20);
    printf("%d\n", area(r));
}