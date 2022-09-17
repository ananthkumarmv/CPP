#include<iostream>

using namespace std;

string replaceBlankWith20(string str){
	
	string replaceby = "%20";
	
	int n=0;
	
	// loop till the spaces are replaced
	while((n = str.find(" ", n)) != string::npos){
		
		str.replace(n, 1, replaceby);
		
		n+=replaceby.length();
	}
	
	return str;
	
}


int main(){
	
	string str = "Google com in";
	
	cout<<replaceBlankWith20(str);

	return 0;
}
