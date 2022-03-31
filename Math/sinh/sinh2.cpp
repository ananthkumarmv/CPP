#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int x = -4;
	
	double result = sinh(x);
	cout<<"sinh(-4) = "<<result<<endl;
	
	// x in Degrees
	double xDegrees = 90;
	
	// convert to radians
	x = xDegrees * 3.142 / 180;
	
	result = sinh(x);
	cout << "sinh(90 degrees) = " << result << endl;


    return 0;
}


