#include<stdio.h>

struct Rectangle{
    int length;
    int bredth;
};

void initialize(struct Rectangle *r, int l, int b){   // call by address
    r->length = l;
    r->bredth = b;
}

int area(struct Rectangle r){      // call by value
    return r.length*r.bredth;
}

void changelength(struct Rectangle *r, int l){      // call by address
    r->length = l;
}