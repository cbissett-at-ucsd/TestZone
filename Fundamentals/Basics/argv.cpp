#include <iostream>
#include <string>
using namespace std;
int main( int a, char* txt[]){
    cout<< txt[0];// returns the file name you just executed
    // to input arguments into the command line type
    //   ".\argv.exe  some dumb arguments"
    // it will return four arguments
    // the file name = txt[0]
    // some = txt[1]
    // dumb = txt[2]...
    //  a= (#args)-1
    return 0;
}