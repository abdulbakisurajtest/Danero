#include <iostream>

using namespace std;

const int n_max=100;
int main(){
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
		cout<<" ]";
	}
	else{
		cout<<"Count must be in range[1,100]!"<<endl;
	}
}
