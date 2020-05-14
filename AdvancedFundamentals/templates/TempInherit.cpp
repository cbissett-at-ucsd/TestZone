#include <iostream>
using namespace std;
template <class T>
class parent{
    public:
     T p;
    private:
     int pvt;
};
template<class T>
class child: public parent<T>{
    protected:int c;
};
class gndCld:public child<int>{
    private:
    int gc;
    public:
        gndCld(int x, int y, int z){ p=x;c=y;gc=z;};
        //pvt =1;  inacessable 
        void say(){
            cout<<p<<endl;
            cout<<c<<endl;
            cout<<gc;
            return;
        };
};
int main(){
    return 0;
}