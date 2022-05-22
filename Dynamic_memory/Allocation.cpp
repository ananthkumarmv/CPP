#include<iostream>

using namespace std;

int main(){
	
	// Static allocation (allocation and deallocation done by the compiler)
	int b[100];
	cout<<sizeof(b)<<endl;
	cout<<b<<endl;   // comes from symbol table
	// here "b" cant be over written, b is constant that is stored inside the "show table" 
	
	//Dynamic Allocation (on the fly)
	int n;
	cin>>n;
	
	int *a = new int[n];
	
	cout<<sizeof(a)<<endl;
	cout<<a<<endl;  // variable "a" that is created inside the static memory -> can be ovrewritten
	
	for(int i=0; i<n; i++){
		cin>>a[i];
		cout<<a[i]<<" ";
	}
	
	//Free up the space
	delete []a;


    return 0;
}


