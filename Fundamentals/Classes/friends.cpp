#include <iostream> 
class A { 
private: 
	int a; 
public: 
    void isfriendofA(){
        std::cout<<"\nyou are a friend of A\n";
    }
	A() { a = 0; } 
	friend class B; // Friend Class 
}; 

class B { 
private: 
	int b; 
public: 
	void friends(A& x) 
	{ 
		// Since B is friend of A, it can access 
		// private members of A 
		std::cout << "A::a=" << x.a; 
        x.isfriendofA();
	} 
}; 

int main() 
{ 
	A a; 
	B b; 
	b.friends(a); 
	return 0; 
} 
