#include<stdio.h>


class Rectangle{
    private:
    int length;
    int bredth;

    public:
    void initialize(int l, int b){   // call by address
        length = l;
        bredth = b;  
    }

    int area(){      // call by value
        return length*bredth;
    }

    void changelength(int l){      // call by address
        length = l;
    }

};

class Rectangle_modified{
    private:
    int length;
    int bredth;

    public:
    Rectangle_modified(int l, int b){   // constructer
        length = l;
        bredth = b;  
    }

    int area(){      
        return length*bredth;
    }

    void changelength(int l){      
        length = l;
    }

};


int main(){
    Rectangle r;
    Rectangle_modified r1(10,5);
    r.initialize(10,5);
    int area = r.area();
    r.changelength(13);
}