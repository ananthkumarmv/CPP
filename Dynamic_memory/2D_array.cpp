#include<iostream>

using namespace std;

#define COL 3
#define ROW 3

int main(){
	
	char **pcBuffer = new char*[ROW];  //Assigned the memory for the row
	
	for(int iCol=0; iCol < COL; iCol++){  //Assigned the memory for the column
		pcBuffer[iCol] = new char[COL];
	}
	
	for(int iRow = 0; iRow<ROW; iRow++){
		for(int iCol=0; iCol<COL; iCol++){
			pcBuffer[iRow][iCol]=(iRow+iCol)+48;   // Assign the value to the 2D array
			
		}
	}
	
	for(int iRow=0; iRow<ROW; iRow++){
		for(int iCol=0; iCol<COL; iCol++){
			cout<<pcBuffer[iRow][iCol]<<endl;   //print the assigned value
		}
	}
	
	for(int iCol=0; iCol<COL; iCol++)   // delete all the columns
		delete[] pcBuffer[iCol];
		
	delete[] pcBuffer;  //delete all the rows

    return 0;
}


