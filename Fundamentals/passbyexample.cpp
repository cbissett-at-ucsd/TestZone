#include <iostream>
using namespace std;

int ptX(int* a){
    *a=*a+1;
    return *a;
}
int ampX(int a&){
    a=a+1;
    cout<<"\n&a="<<&a;
    return a;
}
int main(){
    int x=5;
    
    cout<<"x="<<x;
    cout<<"\n&x="<< &x;
    cout<< "\nx->*a+1="<< ptX(&x);
    cout<<"\nx="<<x;
    int a=ampX(x);
    cout<<"\na="<<a;
    cout<<"\nx="<<x;
    return 1;
}