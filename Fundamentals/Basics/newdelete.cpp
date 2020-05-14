#include <iostream>
using namespace std;
int main(){
    //a buffer is just an array created with the "new" function
    char *pntBuffer= new char[100]{0};
    cout<<*pntBuffer<<endl;
    delete pntBuffer; //DONT FORGET TO DELETE
    // writing to a buffer literally means just writing at that location

    pntBuffer= new char[50]{0};// new buffer
    cout<<*pntBuffer<<endl;
    return 0;
}