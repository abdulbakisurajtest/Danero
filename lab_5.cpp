#include <iostream>

using namespace std;

const int n_max = 100;

void task1()
{
	cout<<"\n\n\n\tTASK 1"<<endl;
	// variable declaration
	int n;	// real elements count
	float input_arr[n_max];	// array for 100 real numbers
	float order_arr[n_max];	// array to store index of element greater than right neighbour
	int order_count = 0;	// greater element count
	int order_index = 0;	// index for order array(order_arr)

	// get element count
	cout<<"Enter number of elements: ";
	cin>>n;

	if(n>0 && n<=n_max){	// valid count
	
		// get elements
		cout<<"\n\n";
		for(int i=0; i<n; i++){
			cout<<"Enter element "<<i+1<<": ";	// i+1 - element order
			cin>>input_arr[i];	// i - element index
		}	// for i end
		
		// check order
		for(int i=0; i<n-1; i++){
			if(input_arr[i] > input_arr[i+1]){	// check if element is greater than right neighbour
				order_arr[order_index] = i;	// save element index to order_array
				order_count++;	// increment order count by 1
				order_index++;	// increment order index by 1
			}	// if end
		}	// for i end
		
		// output
		cout<<"\n\nOrder Numbers Greater Than Their Right Neighbour"<<endl;
		for(int i=order_count-1; i>=0; i--){
			cout<<"Element "<<order_arr[i]+1<<": "<<input_arr[int(order_arr[i])]<<endl;
		}	// end for i;
		cout<<endl;
		
	}	// if end
	else{
		cout<<"Count must be in range[1,100]!"<<endl;
	}	//else end
}

void task2()
{
	cout<<"\n\n\n\tTASK 2"<<endl;
	// variable declaration
	int n; // real elements count
	float input_arr[n_max];	// array for 100 real numbers
	float output_arr[n_max];	// array to store array after left cyclic shift
	
	// get element count
	cout<<"Enter number of elements: ";
	cin>>n;
	
	if(n>0 && n<=n_max){	// valid count
		
		// get elements
		cout<<"\n\n";
		for(int i=0; i<n; i++){
			cout<<"Enter element "<<i+1<<": ";	// i+1 - element order
			cin>>input_arr[i];	// i - element index
		}	// for i end
		
		// perform left cyclic shift
		for(int i=0; i<n-1; i++){
			output_arr[i] = input_arr[i+1];
		}
		output_arr[n-1] = input_arr[0];
		
		
		//display input array
		cout<<"\n\n";
		cout<<"Array Before Left Cyclic Shift: \n"<<endl;
		cout<<"Input Array = [ ";
		for(int i=0; i<n; i++){
			cout<<" "<<input_arr[i];
		}
		cout<<" ]";
		
		// display output array
		cout<<"\n\n\n";
		cout<<"Array After Left Cyclic Shift: \n"<<endl;
		cout<<"Output Array = [ ";
		for(int i=0; i<n; i++){
			cout<<" "<<output_arr[i];
		}
		cout<<" ]"<<endl;
	}
	else{
		cout<<"Count must be in range[1,100]!"<<endl;
	}
}

void task3()
{
	cout<<"\n\n\n\tTASK 3"<<endl;
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
		cout<<endl;	
	}
	else{
		cout<<"Rows and columns must be in range[1,100]!"<<endl;
	}
}

void task4()
{
	cout<<"\n\n\n\tTASK 4"<<endl;
	// variable declaration
	int task = 0;
	do{
		cout<<"\n\n\n"<<endl;
		cout<<"Select a task from the list below: "<<endl;
		cout<<"Press 1 for task 1"<<endl;
		cout<<"Press 2 for task 2"<<endl;
		cout<<"Press 3 for task 3"<<endl;
		cout<<"Press 0 to quit"<<endl;
		cin>>task;
		cout<<"\n"<<endl;
		switch(task)
		{
			case 1:
				task1();
				break;
			case 2:
				task2();
				break;
			case 3:
				task3();
				break;
			default:
				break;
		}
	}while(task != 0);
}

int main(){
	task1();
	task2();
	task3();
	task4();
	
	return 0;
}
