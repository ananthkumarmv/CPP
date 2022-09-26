#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	
	vector<string> color;
	
	color.push_back("Blue");
	color.push_back("Red");
	color.push_back("Orange");
	
	for (int i = 0; i < color.size(); i++)
        std::cout << color[i] << "\n";

	return 0;
}
