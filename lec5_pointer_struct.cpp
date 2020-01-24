# include<iostream>

struct Rectangle{
    int length;
    int bredth;
};

int main(){
    struct Rectangle r = {10,12};

    struct Rectangle *p = &r;
     // how to access length and bredth
     // higher precedence is for . operator

    (*p).length = 20;   //or
    p->length = 20;
        // create an object dynamically
    struct Rectangle *p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p1->length = 10;
    p1->bredth = 5;
    
     return 0;


};