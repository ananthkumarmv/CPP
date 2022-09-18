#include<iostream>

using namespace std;

struct GreaterSmaller{
	int greater, smaller;
};


GreaterSmaller findGreaterSmaller(int a, int b){
	
	GreaterSmaller s;
	
	if(a>b){
		s.greater = a;
		s.smaller = b;
	}
	else{
		s.greater = b;
		s.smaller = a;
	}
	return s;
	
	
}

int main(){
	
	GreaterSmaller gs = findGreaterSmaller(5, 6);
	
	cout<<gs.greater<<" "<<gs.smaller;

	return 0;
}
