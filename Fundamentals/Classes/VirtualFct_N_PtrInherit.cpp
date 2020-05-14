#include <iostream>
using namespace std;


/*
Virtual Function in C++
A virtual function a member function which is declared within a base class
 and is re-defined(Overriden) by a derived class.
 *When you refer to a derived class object using a pointer* or a reference to the base class,
 you can call a virtual function for that object and *execute the derived class’s version of the function*.
*/

class base{// move the virtual identifiyer in front of different say's
    public:
    base(){cout<<"base";}
    void say(){cout<< "base\n";return;}
};
class subclass:public base{
    public:
    subclass(){cout<<"subclass";}
    //virtual void say(){cout<<"subclass\n"; return;}
     void say(){cout<<"subclass\n"; return;}
};
class twodeep : public subclass{
    public:
    twodeep(){cout<<"twodeep";}
    void say(){cout<<"two deep\n";}
};

int main(){
    base b;
    subclass sub;
    twodeep two;
    //basepointer to lower items
    base* bPnt=&b;
    bPnt->say();
    bPnt=&sub;
    bPnt->say();
    bPnt=&two;
    bPnt->say();
    cout<<endl;

    //level 2 pointer to level 3 iems
    subclass* sPnt=&sub;
    sPnt->say();
    sPnt=&two;
    sPnt->say();
    cout<<endl;

    //two pointer can only point to two class
    twodeep* ssPnt=&two;
    ssPnt->say();
    return 0;
}