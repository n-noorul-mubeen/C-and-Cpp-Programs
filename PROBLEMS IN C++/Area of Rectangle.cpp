#include <iostream>

using namespace std;

class Area{
    private:
    float area;
    public:
    Area(int l, int b){
        area = (float) l * b;
    }
    float ar(){
        return area;
    }
};
int main()
{
    float n1, n2;
    cout<<"Enter the length of rectangle: ";
    cin>>n1;
    cout<<"Enter the breadth of rectangle: ";
    cin>>n2;
    Area a(n1,n2);
    cout<<"The area fo the rectangle is "<<a.ar()<<" sq. units."<<endl;

    return 0;
}
