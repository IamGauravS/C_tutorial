#include<iostream>

using namespace std;

class Rectangle{
    private:
        int length;
        int bredth;

    public:
        Rectangle(){
            length=bredth=1;
        }
        Rectangle(int l, int b);
        int area();
        int perimeter();
        int getlen(){
            return length;
        };
        void setlen(int l){
            length = l;
        }
};
Rectangle::Rectangle(int l, int b){
    length=l;
    bredth = b;
}

int Rectangle::area(){
    return length*bredth;
}

int Rectangle::perimeter(){
    return 2*(length+bredth);
}

int main(){
    Rectangle r(10,5);
    cout<<r.area();
    cout<<r.perimeter();
    r.setlen(20);
    cout<<r.getlen();

    return 0;
}