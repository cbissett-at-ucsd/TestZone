#include <iostream>
using namespace std;


class a{
    public:
    int x;
    friend ostream& operator<<(ostream &stream, a &me){
        stream<<me.x;
    }
};
class b:public a{
    public:
    int y;
    operator a(){
        a temp;
        temp.x=x;
        return temp;
    }
        friend ostream& operator<<(ostream &stream, b &me){
        stream<<me.x;
    }
};
class c: public b{
    public:
    int z;
    operator a(){
        a temp;
        temp.x=x;
        return temp;
    }
    friend ostream& operator<<(ostream &stream, c &me){
        stream<<me.x;
    }
};

int main(){
    a i1;
    b i2;
    c i3;
    i1.x=1;
    i2.x=2;
    i3.x=3;
    cout<<i1<<i2<<i3;
    i1=i2;
    cout<<endl<<i1;
    i1=i3;
    cout<<endl<<i1;
    return 0;
}