#include<iostream>
#include<utility>

using namespace std;

pair<int, int> fCall(int a, int b){
	return make_pair(b, a);
}


int main(){
	
	// storing returned values in a pair
	pair<int, int> p = fCall(5,2);
	
	cout<<p.first<<" "<<p.second;

	return 0;
}
