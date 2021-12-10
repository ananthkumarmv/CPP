#include<iostream>
#include <algorithm>
#include <array>


using namespace std;

template <class T, size_t N>
void sort(array<T, N> &arr){
	sort(begin(arr), end(arr));
}



int main(){
	array<int, 5> arr = {3,5,2,4,7};
	sort(arr);
	
	for(int const &i: arr){
		cout<<i<<' ';
	}


    return 0;
}


