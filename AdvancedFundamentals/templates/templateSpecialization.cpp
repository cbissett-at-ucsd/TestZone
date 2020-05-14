#include <iostream>
using namespace std;
template <typename T>
class base{
    public:
    void funct(){cout<<"im whatever\n";};
    base(){cout<<"std\n";}
};
template<>
void  base<char>::funct(){cout<<"im a char\n";};
template
base<char>::base(){
    cout<<"char\n";
}
int main(){
    base<int> i;
    base<char> c;
    cout<<"int:";   i.funct();
    cout<<"char:";  c.funct();
    return 0;
}