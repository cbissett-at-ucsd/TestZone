#include <iostream>
#include <cstring>
using namespace std;
class buffer{
    char* pbuffer;  int size;
    public:
    buffer(int in=0){
        size= in;
        pbuffer=new char[in];
    }
    buffer(char* pstr, int strlen){
        size=strlen;
        pbuffer=new char[size+1];
        for(int i=0; i<size;i++){
            *(pbuffer+i)=*(pstr+i);
        }
    }
    ~buffer(){
        delete pbuffer;
    }
    void say(){
        for(int i=0; i<size;i++){
            cout<<*(pbuffer+i);
        }
        return;
    };
};
int main(){
    char yellow[]="yellow";
    int len=strlen(yellow);
    buffer x(yellow,len);
    x.say();
    /*
    for(int i=0; i<len; i++){
        cout<<*(ye+i);
    }//*/
    return 0;
}