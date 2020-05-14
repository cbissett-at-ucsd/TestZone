#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<j;
            if(j==i){
                cout<<'\n';
                break ;
                //continue; also exists
                //use goto if you wanna break through multiple loops.
            }
            if(i==9,j==6){
                cout<<"\n96 ayy\n";
                goto el1;
            }
            
        }
    }
    el1:
    return 0;
}