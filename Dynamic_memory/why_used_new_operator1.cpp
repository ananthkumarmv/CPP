#include<iostream>

using namespace std;

class Animal{
	public:
		unsigned int m_uiSpeed;
};

int main(int argc, char** argv) {
	int iSpeedRequired =0;
	
	cout<< "Enter 1 to get the Speed  = ";
	
	cin>>iSpeedRequired;
	
	if(1 == iSpeedRequired)
	{
		Animal cat;
		cat.m_uiSpeed = 100;
		
		cout<<"Speed = "<<cat.m_uiSpeed<<endl;
	}
	else
	{
		cout<<"Entry is wrong"<<endl;
	}
	
	// compiler error
	cout<<"Speed = "<<cat.m_uiSpeed<<endl;
    return 0;
}
