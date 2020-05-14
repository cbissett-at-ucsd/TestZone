#include <iostream>
using namespace std;

template <typename t>
t max(t& t1, t& t2){
    if( t1<t2 ){
        return t1;
    }
    return t2;
};

class vect{
    public:
    vect(){x=0,y=0;};
    vect(float ax, float ay):x(ax),y(ay){;};
    float x,y;
    bool operator<(const vect& tmp){
        if(x<tmp.x&& y<tmp.y){
            return true;
        }
    };
    friend ostream operator<<(ostream& out, const vect& tmp){// note:play with const
        out<<"x:"<<tmp.x<<"\ny:"<<tmp.y;
    };
};


int main(){
    vect a(1,2),b(0,1);
    cout<<max(a,b);
    return 1;
}