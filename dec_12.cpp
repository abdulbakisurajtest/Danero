#include <iostream>
using namespace std;

/*
Workbench (laboratory) task: Write a procedure Smooth2(A, n) that performs
smoothing an array A of N real numbers as follows: an element A1 remains
unchanged; elements Ak(K=2, ..., N) is replaced with the average of initial
values of elements A(k-1) and A(k). The array A is an input and output
parameter. Using five calls of this procedure, perform smoothing a given
array A of N real numbers five times successively; output array elements
after each smoothing.
*/

const int n_max = 100;	// maximum value of array

void smooth_arr(float input_arr[], int N){
	// variable declaration
	float output_arr[n_max];
	output_arr[0] = input_arr[0];
	
	// smoothing of array
	for(int i=1; i<N; i++){
		output_arr[i] = (input_arr[i-1] + input_arr[i]) / 2;
	}
	
	// output array
	
	cout<<"\n"<<endl;
	
	// show initial array
	cout<<"Initial array = [  "<<input_arr[0]<<"  ";
	for(int i=1; i<N; i++)
	{
		cout<<input_arr[i]<<"  ";
	}
	cout<<"]";
	
	cout<<"\n"<<endl;
	
	// show final(smooth) array
	cout<<"Final array = [  "<<output_arr[0]<<"  ";
	for(int i=1; i<N; i++)
	{
		cout<<output_arr[i]<<"  ";
	}
	cout<<"]";
}

int main(){
	// variable declaration
	float input_arr[n_max];
	int N;
	
	// input
	cout<<"Enter number of elements: ";
	cin>>N;
	
	for(int i=0; i<N; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>input_arr[i];
	}
	
	smooth_arr(input_arr, N);
}
