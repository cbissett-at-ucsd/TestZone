#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
class vect;
class complex{
    public:
    // Constructors -----------------------------
    complex(float realIn=0, float imaginaryIn=0){
        r=realIn;
        i=imaginaryIn;
    }
    //Conversion operators ----------------------
    operator double(){return magnitude();}
    //provides a format for converting to double or typecasting to double
    

    // Operator Overloads -----------------------
    friend std::ostream& operator<<(std::ostream& str,const complex& a)
    {    
        str<<"re= "<< a.r<<" im= "<<a.i;
        return str;
    }
    complex operator+ (const complex& a)const{
        complex tmp(r+a.r,i+a.i);
        return tmp;
    }//*/

    // Setters --------------------
    complex  setr(double rin){ r=rin; return *this;}
    
    // operational functions --------------------
    private:
    float magnitude(){
        return sqrt(r*r+i*i);
    }
    float angle(){
        return atan2(i,r);
    }
    // Variable Declarations --------------------
    float r,i;
};

int main(){
    complex a(1,2);
    return 0;
}
