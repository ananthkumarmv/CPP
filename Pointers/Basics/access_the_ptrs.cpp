#include<iostream>

using namespace std;

int main(){
	
	int* iptr, data;
	
	data =20;
	
	iptr = &data;
	
	cout<<*iptr<<endl;
	
	*iptr = 5;
	
	cout<<data;

    return 0;
}


