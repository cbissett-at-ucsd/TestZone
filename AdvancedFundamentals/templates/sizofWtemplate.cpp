#include <iostream>
using namespace std;
template <typename T>
class size{
    public:
    T* me;
    size(const T* a){
        cout<< sizeof(a);
        me=new T[sizeof(a)/sizeof(*a)];
        cout<<sizeof(me);
    }
    ~size(){delete me;}
};

int main(){
    size<char> x("yeet");
    return 0;
}

