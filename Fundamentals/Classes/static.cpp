#include<iostream>
using namespace std;

class globe{
    static int count;
    public:
    void setcount(int x=0){
        count=x;
        return;
    }
    int upcount(){
        return ++count;
    };
};
///mandatory you call it outside of scope.
int globe::count =0;

int main(){
    
    globe a,b;
    for(int i=0;i<10;i++){
        cout<<"a b : "<< a.upcount()<<' '<<b.upcount()<<endl;
    }
    return 0;
}