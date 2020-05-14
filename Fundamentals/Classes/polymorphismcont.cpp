#include <iostream>
using namespace std;

class base{
    public:
    base(){}
    base(base &in){
        cout<< "base->base\n";
        in.tst();
        //in.see(); not allowed
    }
    //base(const subclass &in){}  ?!not allowed!?

    // advanced testing
    // using a virtual instance of the function tst to call a subclass function from a class type
    //virtual int tst(){cout<<"fail";}
    int tst(){cout<<"base.tst()";}
};
class subclass:public base{
    public:
    subclass(){}
    subclass(base &in){cout<< "base->sub\n";}
    subclass(const subclass &in){cout<< "sub->sub\n";}

    // advanced testing
    int tst(){see();};
    void see(){cout<<"subclas.test()";}
};

int main(){
    base a;
    subclass b;
    cout<<endl;

    subclass x(a);  //base-> sub
    subclass y(b);  //sub->sub
    base c(x);      //sub->base

    return 0;
}
