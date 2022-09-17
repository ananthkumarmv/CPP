#include<iostream>

using namespace std;

int main(){
	
	string str("Unbeknownstguy");
	
	char *char_arr;
	
	char_arr = &str[0];
	cout<<char_arr;

	return 0;
}
