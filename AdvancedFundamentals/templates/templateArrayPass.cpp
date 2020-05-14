#include <iostream>
using namespace std;
//shit doesn't work
template <class T>
class tst{
    T* me;
    public:
    tst(T in[]):me(in){
        cout<< sizeof in;
    }
};

int main(){
    int  x[]={1,2,3,4,5,6,0};
    char y[]= "yabba dabba do";
    cout<< sizeof(x)<<endl;
    cout<< sizeof(y)<<endl;

    tst<char> z(y);
    return 0;
}