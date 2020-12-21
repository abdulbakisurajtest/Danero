#include <iostream>

using namespace std;

const int n_max = 100;
int main(){
	
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
		
		
	}	// if end
	else{
		cout<<"Count must be in range[1,100]!"<<endl;
	}	//else end
}
