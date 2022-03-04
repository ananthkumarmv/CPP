#include<iostream>

using namespace std;

struct S
{
    int n = 42;   // default member initializer
    S() : n(7) {} // will set n to 7, not 42
};

int main(){
	
	S v;
	cout<<v.n;


    return 0;
}


