#include <math.h>
#include <iostream>
using namespace std;

class coordinates{
    protected:
    float x,y;
    friend class complex ;
    public:
    coordinates(float a=0, float b=0):x(a),y(b){;}
    friend ostream& operator<<(ostream& stream,const coordinates& me){
        stream<<"X:"<<me.x<<endl<<"Y:"<<me.y<<endl;
    };
    float getAngle(){return atan2(y,x);};
    float getMagnitude(){return sqrt(x*x+y*y);};
    float getx(){return x;};
    float gety(){return y;};
    
};

// note FRIENDS are allowed to acess protected items in a class from class objects
// friends arent given any copies of anything though
class complex{
    float r, im;
    complex operator*(const coordinates& xy){
        complex temp;
        temp.r=r*xy.x-im*xy.y;  //normally xy.y is not an allowable function anywhere but in the class
        temp.im=im*xy.x+r*xy.y; // here we are allowed to do the dot operator because we are friends
        return temp;            // nothing is actually given to complex
    }
    complex operator*(const complex& H){
        complex temp;
        temp.r=r*H.r-im*H.im;
        temp.im=im*H.r+r*H.im;
        return temp;
    }
};

// children inherit their own copies of class objects from protected and public
// however they cannot acess parent objects protected and private functions and data 
// in the same way that the parents do inside themselves
// ex: this class gets its own copy of x and y for themselves
// but cannot access the x and y of its parents
// ex lin.x is not allowed
class radial: public coordinates{
    public:
    float magnitude,angle;
    radial(float a,float b):magnitude(a),angle(b){;}
    radial(coordinates& lin){
        x=lin.getx();// lin.x is an invalid function
        y=lin.gety();
        magnitude= getMagnitude();
        angle=     getAngle();
    }
    friend ostream& operator<<(ostream& stream,const radial& me){
        stream<<"Mag:"<<me.magnitude<<endl<<"Angle:"<<me.angle<<endl;
    };
};
int main(){

    return 0;
}