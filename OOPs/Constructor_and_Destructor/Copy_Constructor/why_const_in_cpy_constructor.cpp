#include<iostream>

using namespace std;

class Test{
	/* class data members */
	public:
		// should be Test(const Test &t)
		Test(Test &t){ /* copy data members from t */ }
		
		Test(){ /* Initialize data members */ }
};

Test fun(){
	cout<< "fun() called\n";
	Test t;
	return t;
}


int main(){
	
	Test t1;
	Test t2=fun();  //error

	return 0;
}

