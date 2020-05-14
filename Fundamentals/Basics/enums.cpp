#include <iostream>
using namespace std;


enum direction {East, West, North=5, South};
//creates an alias for an integer type


int main(){
    direction d0, d1, d2, d3;
    d0 = East;
    d1 = West;
    d2 = North;
    d3 = South;
    cout<< d0<<' '<<d1<<' '<<d2<<' '<< d3 <<endl;
    // NOTE: ENUMS CANT HOLD VALUES OUTSIDE OF WHATS SPECIFIED
    //d0=13; <-- INVALID LINE OF CODE
    // NOTE: ENUM VALUES CAN'T BE CHANGED AFTER INITIATION
    //North='a'; <-- INVALID LINE OF CODE

    direction d[]{d0,d1,d2,d3};
    for(int i=0;i<4;i++){
        switch (d[i]){
        case West:
            cout<< "weest";
            break;
        case 0: 
            cout<< "eaast";
            break;
        case North:
            cout<< "north"<<d[1];
            break;
        default:
            cout<<"yote";
        }
    }

    int i=d1;
    i=d1*4;
    cout<<'\n'<<i;
   return 0;
}