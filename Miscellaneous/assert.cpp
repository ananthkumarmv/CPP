#include<iostream>
#include<assert.h>

using namespace std;

int main(){
	int x = 7;
	
	x = 9;
	
	assert(x==7);
	
	cout<<x;


    return 0;
}


//Assertion failed!
//
//Program: C:\Users\Unbeknownstguy\Documents\GitHub\CPP\Miscellaneous\assert.exe
//File: C:\Users\Unbeknownstguy\Documents\GitHub\CPP\Miscellaneous\assert.cpp, Line 11
//
//Expression: x==7
