#include<iostream>
#include<tuple>

using namespace std;


tuple <int, int> findGreaterSmaller(int a, int b){
	
	if(a<b)
	    // Packing values to return a tuple
		return make_tuple(a, b);
		
	else
		return make_tuple(b, a);
}


int main(){
	
	int x = 5, y = 6;
	
	int max, min;
	
	// Unpack the elements returned by function
	tie(min, max) = findGreaterSmaller(x, y);
	
	cout<<max<<" "<<min;

	return 0;
}
