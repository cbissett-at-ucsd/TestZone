#include <iostream>
using namespace std;

class parent{
    public:
     int p;
    private:
     int pvt;
};
class child: public parent{
    protected:
     int c;

};
class gndCld:public child{
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
    gndCld a(100,2,3);
    a.say();
    return 0;
}