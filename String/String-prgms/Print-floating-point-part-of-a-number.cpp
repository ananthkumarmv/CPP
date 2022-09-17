#include<iostream>

using namespace std;


string returnFloatingPart(string str){
	int pos = str.find(".");
	cout<<pos;
	if(pos == string::npos)
		return "";
	else
		return str.substr(pos+1);
}

int main(){
	
	string fnum = "43.5327";
	
	cout<<returnFloatingPart(fnum);

	return 0;
}
