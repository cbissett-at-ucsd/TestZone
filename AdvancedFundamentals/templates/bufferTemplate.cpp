#include <iostream>
using namespace std;
namespace a{
    //a buffer is just an array created with the "new" function
    template<typename T>
    class buffer{
        protected:
        T* pt;
        size_t size;
        size_t dataLen;
        public:
        // Constructors -----------------------------------------------------------1
            buffer(): pt(nullptr),size(0){};
            buffer(buffer<T> &in){
                size=in.size;
                pt= new T[size];
                for(int i=0;i<in.dataLen;i++){*(pt+i)=*(in+i);}// copy data
            }
            buffer( const T* in, size_t len){
                size=calcsize(len);
                pt= new T[size];// create buffer
                for(int i=0;i<len;i++){*(pt+i)=*(in+i);}// copy data
            }
            ~buffer(){if(pt)delete pt;}
        // functions -------------------------------------------------------------2
            void say(){ for(long i=0; i<size;i++){cout<<*(pt+i);} return;};
            size_t getlen(){
                return sizeof(pt)/sizeof(*(pt))
            }
            size_t calcsize(size_t in){
                if(in==0) return 0;
                size_t suggestion=1;
                while( suggestion < in ){suggestion<<=2;}
                return suggestion;
            }
    };
    class string: public buffer<char>{
        public:
        string(char* in, size_t len){
            size=len;
            pt= new char[size];// create buffer
            for(int i=0;i<size;i++){*(pt+i)=*(in+i);}// copy data
        }
        string(string &in){
            size= in.size;
            dataLen= in.dataLen;
            for(int i=0;i<size;i++){*(pt+i)=*(in.pt+i);}// copy data
        }
    };
}
int main(){
    string a("yeet",5);
    string b(a);
    return 0;
}
