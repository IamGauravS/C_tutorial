# include <stdio.h>

int main(){
    int a = 10;   // data variable
    int *p;   // pointer  declaration

    p = &a;   // p is storing the address of the memory  called intialization

    printf("%d", a);
    printf("%d", *p);    // dereferencing

    return 0;
}