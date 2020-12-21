#include <iostream>

using namespace std;

const int n_max = 100;
int main(){
	
	// variable declaration
	int m;	// number of rows
	int n;	// number of columns
	float input_arr[m][n];	//	m X n matrix to store inputs
	int max_sum=0;	// store maximum sum of elements of row
	int max_row=0;	// store row index with maximum sum of elements
	
	// get number of rows
	cout<<"Enter number of rows: ";
	cin>>m;
	
	// get number of columns
	cout<<"Enter number of columns: ";
	cin>>n;
	
	if(m>0 && m<=n_max && n>0 && n<=n_max){		// number of rows and columns are greater than zero
		
		// get elements
		cout<<"\n\n";
		for(int i=0; i<m; i++){	// loop by row
			for(int j=0; j<n; j++){	// loop by column
				cout<<"Enter element["<<i+1<<"]["<<j+1<<"]: ";
				cin>>input_arr[i][j];
			}	// end j for
		}	// end i for
		
		// display matrix
		cout<<"\n\n\n";
		cout<<"\t"<<m<<" X "<<n<<" Matrix\n\n";
		for(int i=0; i<m; i++){	// loop by row
			cout<<"\t";
			for(int j=0; j<n; j++){	// loop by column
				cout<<input_arr[i][j]<<"\t";
			}	// end j for
			cout<<endl;
		}	// end i for
		
		// check row with largest sum value
		for(int i=0; i<m; i++){	// loop by row
			int temp_sum = 0;	// store the sum value of current row
			for(int j=0; j<n; j++){	// loop by column
				temp_sum = temp_sum + input_arr[i][j];
			}	// end j for
			if(temp_sum > max_sum){	// check if the sum value of current row is greater than maximum sum
				max_sum = temp_sum;
				max_row = i;
			}	// end if
		}	// end i for
		
		// display result
		cout<<"\n\n\n";
		cout<<"\tRESULT"<<endl;
		cout<<"Order number with maximum sum of elements in a row: ";
		for(int j=0; j<m; j++)
		{
			cout<<"["<<max_row+1<<", "<<j+1<<"] ";
		}
		cout<<endl;
		cout<<"Their sum: "<<max_sum;	
	}
	else{
		cout<<"Rows and columns must be in range[1,100]!"<<endl;
	}
	
}
