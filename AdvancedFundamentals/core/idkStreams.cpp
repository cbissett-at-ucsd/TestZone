#include <iostream>
using namespace std;
class c;
class b;
class a{
    public:
    char me;
    a(){me='a';}
    operator c();
};
class b{
    public:
    char me;
    b(){me='b';}
    operator a(){
        a temp;
        temp.me=me;
        return temp;
    }
};
class c{
    public:
    char me;
    c(){me='c';}
    operator b(){
        b temp;
        temp.me=me;
        return temp;
    }
};
a::operator c(){
    c x;
    x.me=me;
    return x;
};

int main(){
    a i1;
    b i2;
    c i3;
    cout<<i1.me<<i2.me<<i3.me<<endl;
    i2=i3;
    i1=i2;
    //i1=i3;
    cout<<i1.me;

    return 0;
}