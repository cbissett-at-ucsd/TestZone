#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;
int main(){
        //expected input
        //{ "face" : "K", "suit" : "spade"},
        string line("{ \"face\" : \"K\", \"suit\" : \"spade\" },");
        line.erase(remove(line.begin(),line.end(),'\"'));
        line.erase(remove(line.begin(),line.end(),':'));
        line.erase(remove(line.begin(),line.end(),'{'));
        line.erase(remove(line.begin(),line.end(),'}'));
        line.erase(remove(line.begin(),line.end(),','));
        cout<<line;
        /*
        stringstream parser;
        parser<<line;
        string temp;
        parser>>temp>>temp>>temp>>temp;
        cout<<temp;
        parser>>temp>>temp>>temp;
        cout<<temp;

       //*/
}