#include<iostream>

using namespace std;

class Base{
	public:
		// compilers "declares" constructor
};


class A{
	public:
		// user defined constructor
		A(){
			cout<<"A constructor"<<endl;
		}
		
		// uninitialized
		int size;
};

class B: public A{
	// compiler defines default constructor of B, and
	// inserts stub to call A constructor
	
	// compiler won't initialize any data of A
};

class C: public A{
	public:
		C(){
			// User defined default constructor of c
			// compiler inserts stub to call A's constructor
			
			cout<<"C constructor"<<endl;
			
			// compiler won't initialize any data of A
		}
};


class D{
	public:
		D(){
			cout<<"D constructor"<<endl;
		}
		
	private:
		A a;
};



int main(){
	
	Base base;
	
	B b;
	C c;
	D d;
	

	return 0;
}

