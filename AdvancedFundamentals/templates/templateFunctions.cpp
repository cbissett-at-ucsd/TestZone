#include <iostream>
using namespace std;

//Template needs to be called for every function every time
template <typename T,typename U>
T max(T x,U y){
    return x>y?x:y;
};
//for overloads all typenames need to be called and match
template <typename T, typename U>
T max(T x,T y){
    return x>y?x:y;
};
//T self(T x){ return x;}
//--not allowed must have template call preceeding

template <typename T>
T self(T x){ return x;}
//--ok... also works with any random name
/*/ex
template <typename v>
v self(v x){ return x;}
//*/

int main(){
    int x=1,y=2;
    float a=-15.6, b=37.8;
    cout<< max(x,y)<<endl;
    cout<< max(a,b)<<endl;
    cout<< max(x,b)<<endl;
    cout<< self(a) <<endl;
    return 1;
}
