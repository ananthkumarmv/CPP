#include<iostream>

using namespace std;


class Point {
	private:
		int x, y;
	
	public:
		Point(int x1, int y1){
			x = x1;
			y=y1;
		}
		
		// copy constructor
		Point(const Point &p1){
			x=p1.x;
			y=p1.y;
		}
		
		int getx(){
			return x;
		}
		
		int gety(){
			return y;
		}
};



int main(){
	
	Point p1(10, 15);  //Normal constructor is called here
	Point p2 = p1; //  copy constructor is called here
	
	// access values assigned by constructors
	
	cout<<"p1.x = "<<p1.getx() <<", p1.y = "<<p1.gety();
	cout<<"\np2.x = "<<p2.getx()<<", p2.y = "<<p2.gety();

	return 0;
}

