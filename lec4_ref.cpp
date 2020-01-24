// refrence is only available for c++
# include <iostream>


int main(){
    int a = 10;
    int &r = a;   // using refrence to refrence to a variable
    // a itself is called r

    cout<<a;  // useful in parameter passing
    r++;
    cout<<r;
    cout<<a;

    return 0;



}