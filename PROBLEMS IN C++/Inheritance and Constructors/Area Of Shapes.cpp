#include <iostream>
#include <cmath>

using namespace std;

class shape{
    protected:
    int length;
    int breadth;
    int height;
};

class square: public shape{
    public:
    square(int a){
        length = a;
    }
    int area(){
        return length*length;
    }
};

class rectangle: public shape{
    public:
    rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    int area(){
        return length*breadth;
    }
};

class triangle: public shape{
    public:
    triangle(int l, int h){
        length = l;
        height = h;
    }
    int area(){
        return 1/2*length*height;
    }
};

class parallelogram: public shape{
    public:
    parallelogram(int l, int h){
        length = l;
        height = h;
    }
    int area(){
        return length*height;
    }
};

class circle: public shape{
    public:
    circle(int a){
        length = a;
    }
    float area(){
        return M_PI*length*length;
    }
};

int main()
{
    rectangle r(12,122);
    cout<<r.area();

    return 0;
}
