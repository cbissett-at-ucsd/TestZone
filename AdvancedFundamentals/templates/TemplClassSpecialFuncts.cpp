#include <iostream>
using namespace std;
template<typename T>
class saytype{
    T me;
    public:
    saytype(const T& in):me(in){};
    void say(){cout<<me;};
};
//template<>
//void  saytype<bool>::say(){cout<<"BOOL";};

int main(){
    bool a=1;
    
    char b='a';
    saytype x(a);
    saytype y(b);
    x.say();
    y.say();
    return 0;
}