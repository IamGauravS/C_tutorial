#include<stdio.h>

// arrays can only passed by address

void func(int A[], int n){
    int i;
    A[0] = 23;
    for(i=0;i<n;i++){
        printf("%d \n", A[i]);
    }
}

int * fun(int n){         // returning array
    int *p;
    p = (int *)malloc(n*sizeof(int));
    return (p);
}


int main(){
    int A[5] = {1,2,3,4,5};
    func(A,5);
    return 0;
}