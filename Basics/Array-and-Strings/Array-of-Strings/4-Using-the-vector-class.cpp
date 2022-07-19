#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	
	vector<string> color{"Blue", "Red", "Orange"};
	
	color.push_back("Yellow");
	
	for(int i=0; i<color.size(); i++){
		cout<<color[i]<<endl;
	}

    return 0;
}


