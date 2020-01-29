#include <iostream>
using namespace std;

class parent{
    protected:
    int p;
};
class child: public parent{
   
    int c;

};
class gndCld:public child{
    int gc;
};
int main(){

    parent pnt;
    cout<<pnt.gc;
    gndCld agc;
    cout<< agc.p
}