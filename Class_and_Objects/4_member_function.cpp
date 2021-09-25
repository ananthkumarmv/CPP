#include<iostream>

using namespace std;


class A{
	int _value=0;
	
	public: 
		void setv(const int a) {
			_value=a;
		}
		int get();
		int get() const;
};

// we have to include const here also this is the part of the function
int A::get(){
			cout<<"mutable getv";
			return _value;
}


// gets called by const obj 
int A::get() const {
			cout<<"\nconst getv";
			return _value;
}

int main(){
	
	A a;
	a.setv(42);
	cout<<"\na: "<<a.get();
	
	
	const A b=a;
	cout<<"\nb: "<<b.get();
	return 0;
}

