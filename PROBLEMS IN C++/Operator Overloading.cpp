#include <iostream>

using namespace std;

class Integer{
    int a;
    public:
    void input(){
        cout<<"Enter an integer: ";
        cin>>a;
    }
    int output(){
        return a;
    }
    Integer operator + (const Integer& obj){
        Integer I;
        I.a = a + obj.a;
        return I;
    }
};

int main(){
    Integer a, b, c;
    a.input();
    b.input();
    c = a + b;
    cout<<c.output();
}
