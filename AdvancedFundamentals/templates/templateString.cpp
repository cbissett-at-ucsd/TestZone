
template <class T>
class buffer {
  protected:
    long length;
    unique_ptr <T[]> pbuffer;
  public:
  // CONSTRUCTORS ------------------------------------------------------------1
    virtual buffer() : pbuffer(nullptr), length(0) {} ;
    //*
    //*/
    buffer( const T* in,long len=5){
        if(len!=0){
            length=len;
            pbuffer=new T[len+1];
            int i=0;
            for(;i<len;i++){
                *(pbuffer+i)=*(in+i);
            }
        }else{
            pbuffer=nullptr;
            len=0;
        }
    }//*/
    friend ostream& operator<<(ostream& strm, const buffer& me){
        for(int i=0;i<me.length+1;i++){
            strm<<*(me.pbuffer+i);
        }
        return strm;
    }
    // DESTRUCTORS -----------------------------------------------------------2
    ~buffer(){
        delete pbuffer;
    }
}; 
/*
template<class T = char>
class string:public buffer<char>{
    string(T* strin) : pbuffer(nullptr), length(0){
        unsigned long i =0;
        pbuffer= new char[20];
        while(*(strin+i)!=0){
            if(i>10){break;}
            *(pbuffer+i)=*(strin+i)
            i++;
        }
        length=i;
    }
    ~string(){ delete pbuffer;}
};//*/
int main(){return 0;}