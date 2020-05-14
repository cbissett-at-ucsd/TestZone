#include<iostream>
using namespace std;
class yeet{
    public:
    int x;
    yeet& operator+=(const yeet &in){
        //reminder "this" is a pointer,
        //accessing elements and functions requires arrow
        this->x+=in.x;
    }
};
int main(){
    yeet a,b;
    a.x=5;
    b.x=7;
    a+=a;
    b+=a;
    cout<<"a:"<<a.x<<endl;
    cout<<"b:"<<b.x<<endl;
    return 0;
}