#include<iostream>

using namespace std;

struct Point{
	int x, y;
};

int main(){
	
	Point p1 = {1, 2};
	
	// p2 is a pointer to structure p1
	struct Point* p2 = &p1;
	
	// accessing using pointer
	cout<<p2->x<<" "<<p2->y;


    return 0;
}


