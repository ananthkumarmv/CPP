#include<iostream>

using namespace std;

struct Point{
	int x=0;
	int y=1;
};


int main(){
	
	Point p1;
	
	cout<<p1.x<<" "<<p1.y<<endl;
	
	p1.y=20;
	
	cout<<p1.x<<" "<<p1.y<<endl;
	
    return 0;
}


