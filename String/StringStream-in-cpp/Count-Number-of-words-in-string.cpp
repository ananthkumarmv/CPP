#include<iostream>
#include<sstream>
using namespace std;

int main(){
	
	string str;
	
	getline(cin, str);
	
	stringstream s(str);
	
	// To store individual words
	string word;
	
	int count = 0;
	while(s >> word)
		count++;
	
	cout<<count;

	return 0;
}
