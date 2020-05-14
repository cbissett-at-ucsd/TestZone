#include <iostream>
using namespace std;

class a{
    public:
    int ints[5];
    a(){cout<<"yeet";}

    a(const a &in){
        for(int i=0;i<5;i++){
            *(ints+i)=*(in.ints+i);
        }cout<<"yote";
    }
    a(const int* in){
        for(int i=0;i<5;i++){
            *(ints+i)=*(in+i);
        }cout<<"yote";
    }
    void say(){
        for(int i=0;i<5;i++){
            cout<< ints[i];
        }
    };
};
class b:public a{
    public:
    using a::a;
};
int main(){
    int x[5]={1,2,3,4,5};
    b trash(x);
    trash.say();
    return 0;


}
