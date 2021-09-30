#include<iostream>

using namespace std;

class Test{
	public:
		Test(){}
		Test(const Test &t){
			cout<<"copy constructor called "<<endl;
		}
		
		Test& operator = (const Test &t){
			cout<<"Assignment operator called"<<endl;
			return *this;
		}
};


int main(){
	
	Test t1, t2;
	t2= t1;   // Assignment operator
	Test t3=t1;  //copy constructor
	getchar();

	return 0;
}

