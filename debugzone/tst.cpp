#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<string> vec;
    
    for(int i=0;i<10;i++){
        vec.push_back("iword");
    }
    cout<<vec.size();
    //how the fuck to access vectors
    for(int i=0;i<10;i++){
        cout<<vec.at(i)<<'\n';
    }
    auto it=vec.begin();
    for(int i=0;i<10;it++)
        cout<<*it;
    return 0;
}