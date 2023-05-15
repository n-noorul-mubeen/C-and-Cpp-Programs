#include <iostream>

using namespace std;

class Volume{
    private:
    int volume;
    public:
    Volume(int s){
        volume = s*s*s;
    }
    int vol(){
        return volume;
    }
};
int main()
{
    int n;
    cout<<"Enter the side of the cube: ";
    cin>>n;
    Volume v(n);
    cout<<"The volume of the cube with side "<<n<<" units is "<<v.vol()<<" sq. units."<<endl;

    return 0;
}
