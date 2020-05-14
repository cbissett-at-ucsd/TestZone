#pragma once
#include <iostream>
#include <stdlib.h> 
#include <time.h> 
using namespace std;

class card{
    public:
    char val;
    int face;
};

int main(){
    srand(time(0));//seeding random function

    //generating ordered deck 
    //----------------------------------------------------------------------1
    card deck[52];
    //(spades ♠, clubs ♣, diamonds ♦, hearts ♥)
    char set[]={'2','3','4','5','6','7','8','9','0','J','Q','K','A'};
    int k=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            (deck+j+k)->val=set[j];
            (deck+j+k)->face=i;
        }
        k=k+13;
    }
    cout<< (deck+1)->val<<'\n'<< (deck+1)->face;

}