#include<iostream>

using namespace std;

int main(){
	
	long ldata = 0x12345678;
	
	void *vptr = (char *)&ldata + 1;
	
	// address not aligned with long
	
	long *lptr = vptr;
	
	ldata = *lptr;
	
	cout<<ldata;


    return 0;
}


