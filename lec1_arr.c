# include <stdio.h>



int main(){

    int arr[5];
    int i = 0;
    for(i=0; i<5; i++){
        arr[i] = i*4;
    }
    for(i=0;i<5;i++){
        printf("%d \n", arr[i]);
    }

    return 0;

}