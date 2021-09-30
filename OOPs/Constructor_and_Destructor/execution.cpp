#include<iostream>

using namespace std;


class Z{
	
	public:
	
	
	// constructor
	
	// can be overloaded
	// there can multiple in one class	
	Z(){       // can either accept an args or not
		cout<<"Costructor called"<<endl;
	}
	
	//Destructor
	
	// can't be overloaded
	// alwaya a single destructor
	~Z(){      // can't have any args
		cout<<"Destructor called"<<endl;
	}
};


int main(){
	
	Z z1;
	int a=1;
	if(a==1){
		Z z2;
	}
	
	return 0;
}

