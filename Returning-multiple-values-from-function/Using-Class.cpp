#include<iostream>

using namespace std;

class GreaterSmaller{
	public:
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
	
	int x, y;
	
	GreaterSmaller result;
	
	cin>>x>>y;
	
	result = findGreaterSmaller(x, y);
	
	cout<<result.greater<<" "<<result.smaller;

	return 0;
}
