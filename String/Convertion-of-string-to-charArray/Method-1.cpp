#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string s = "Unbeknownstguy";
	
	int n = s.length();
	
	char char_array[n+1];
	
	strcpy(char_array, s.c_str());
	
	for(int i=0; i<n; i++){
		cout<<char_array[i];
	}

	return 0;
}
