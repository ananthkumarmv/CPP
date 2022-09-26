#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
	
	string str1 = "123";
	
	int newNumber = 0;
	
	for(int i = str1.length() - 1; i >= 0; i--){
		int power = str1.length() - i - 1;
		newNumber += (pow(10.0, power) * (str1[i] - '0'));
	}
	
	cout<<newNumber;

	return 0;
}
