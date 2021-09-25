#include<iostream>

using namespace std;


class c1{
	int i=0;
	
	public: 
		void setvalue(const int & value){
			i=value;
		}
		
		int getvalue() const {
			return i;
		}
};

int main(){
	
	const int i=47;
	c1 o1;
	
	o1.setvalue(i);
	cout<<"value is: "<<o1.getvalue();
	

	return 0;
}

