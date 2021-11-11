#include<iostream>
#include<iomanip>
using namespace std;

struct InchFeet{
	int feet;
	float inch;
};


void findSum(InchFeet arr[], int N){
	
	int feet_sum = 0;
	float inch_sum = 0.0;
	
	int x;
	
	for(int i=0; i<N; i++){
		feet_sum +=arr[i].feet;
		inch_sum += arr[i].inch;
	}
	
	if(inch_sum>=12){
		
		int x = (int)inch_sum;
		
		inch_sum -= x;
		
		inch_sum += x%12;
		
		feet_sum += x/12;
	}
	
	cout<<"Feet sum: "<<feet_sum<<"\nInch sum: "<<fixed<<setprecision(4)<<inch_sum<<endl;
	
}


int main(){
	
	InchFeet arr[] = {{10, 3.7},
	                   {10, 5.5},
	                   {6, 8.0}};
	
	int N = sizeof(arr)/sizeof(arr[0]);
	
	findSum(arr, N);


    return 0;
}


