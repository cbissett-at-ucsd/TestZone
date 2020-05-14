#include <fstream>
#include <iostream>
using namespace std;
int main(){
    std::ifstream file;
    file.exceptions ( std::ifstream::failbit | std::ifstream::badbit );
}