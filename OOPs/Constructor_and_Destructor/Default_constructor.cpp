#include<iostream>

using namespace std;

class A{
	public:
		int c, b;
		
		//default constructor
		A(){
			b=10;
			c=20;
		}
};



int main(){
	
	A a;
	
	cout<<"b: "<<a.b<<endl
		<<"c: "<<a.c;

	return 0;
}

