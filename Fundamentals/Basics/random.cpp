#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
     srand((unsigned) time(nullptr));
    int result = rand()%10;
    for(int i=0;i<10;i++){
        std::cout<<rand()%10<<std::endl;
    }
    return 0;
}