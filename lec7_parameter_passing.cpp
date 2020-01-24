# include<stdio.h>
//  procedural programming if broken into function


// three parameter passing method
// pass by value, pass by refrence, pass by address

int add(int a, int b){    // a and b are called formal parameter
    int c ;               // value of x and y are copied here
    c = a+b;
    return c;
}

// pass by value  any changes in formal parameter is not reflected in actual paramter


void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
// pass by address
 
void swap_add(int *x, int *y){
    int temp;
    temp = *x;   // derefrencing
    *x = *y;
    *y = temp;

}

// pass by refrence

void swap_ref( int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;

}
 // call by refrence is not advisable only available in c++
int main(){

   int a, b;
   a = 10;
   b = 20;
   swap(a,b);
   swap_add(&a, &b);
   swap_ref(a, b);   // refrences dont take any extra memory
   printf("%d %d \n ", a, b);

}