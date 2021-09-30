#include<iostream>

using namespace std;

class construct{
	public:
		float area;
		
		// constructor with no parameters
		construct(){
			area = 0;
		}
		
		//constructor with two parameters
		construct(int a, int b){
			area = a*b;
		}
		
		void disp(){
			cout<<area<<endl;
		}
};




int main(){
	construct o;
	construct o2(10, 20);
	
	o.disp();
	o2.disp();

	return 0;
}

