#include<iostream>
#include<algorithm>

using namespace std;

template <class T, size_t N>
void sort(T (&arr)[N]) {
	sort(begin(arr), end(arr));
}


int main(){
	
	int arr[] = {3, 5, 2, 4, 7};
	
	sort(arr);
	
	for(int const &i: arr){
		cout<<i<<' ';
	}
	
    return 0;
}


