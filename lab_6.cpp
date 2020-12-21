#include <iostream>

using namespace std;

const int n_max = 100;

// function to swap to values
void swap(float &x, float &y)
{
	float copy = x;	//	variable to store value of x	
	x = y;	// assign the value of y to x
	y = copy;	// assign the value of copy(value of x) to y
}

// function to return the area of a circle with given radius
float circle(float r)
{
	// variable declaration
	float pi = 3.14;	// value of pi
	float area = pi * r * r;	// formula to calculate area of circle
	
	return area;	// return the calculated area
}

// function to get array input
void get_array(float input_arr[], int &n)
{
	// get element count
	cout<<"Enter number of elements: ";
	cin>>n;
	// get elements
	cout<<"\n\n";
	for(int i=0; i<n; i++){
		cout<<"Enter element "<<i+1<<": ";	// i+1 - element order
		cin>>input_arr[i];	// i - element index
	}	// for i end
}

//	function to perform left cyclic shift
void shift_array(float input_arr[], float output_arr[], int n)
{
	for(int i=0; i<n-1; i++){
			output_arr[i] = input_arr[i+1];
		}
		output_arr[n-1] = input_arr[0];
}

// function to output array
void output_array(float input_arr[], float output_arr[], int n)
{
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


void task1()
{
	cout<<"\n\n\n\tTASK 1"<<endl;
	// variable declaration
	float A, B, C, D;
	
	// input
	cout<<"Enter A: ";
	cin>>A;
	cout<<"Enter B: ";
	cin>>B;
	cout<<"Enter C: ";
	cin>>C;
	cout<<"Enter D: ";
	cin>>D;
	cout<<"\n\n"<<endl;
	
	// swap numbers
	swap(A, B);
	swap(C, D);
	swap(B, C);
	
	// output
	cout<<"\tNumbers after swapping: \n";
	cout<<"A= "<<A<<endl;
	cout<<"B= "<<B<<endl;
	cout<<"C= "<<C<<endl;
	cout<<"D= "<<D<<endl;
}


void task2()
{
	cout<<"\n\n\n\tTASK 2"<<endl;
	// variable declaration
	float radius1, radius2, radius3;	// variable to store radius of circle
	float area1, area2, area3;	// variable to store area of circle
	
	// input
	cout<<"Enter radius 1: ";
	cin>>radius1;
	cout<<"Enter radius 2: ";
	cin>>radius2;
	cout<<"Enter radius 3: ";
	cin>>radius3;
	
	// finding the area of circle with radius
	area1 = circle(radius1);
	area2 = circle(radius2);
	area3 = circle(radius3);
	
	// output
	cout<<endl;
	cout<<"Area of radius1("<<radius1<<")= "<<area1<<endl;
	cout<<"Area of radius2("<<radius2<<")= "<<area2<<endl;
	cout<<"Area of radius3("<<radius3<<")= "<<area3<<endl;
}
	
void task3()
{
	cout<<"\n\n\n\tTASK 3"<<endl;
	// declarations
	int n; // real elements count
	float input_arr[n_max];	// array for 100 real numbers
	float output_arr[n_max];	// array to store array after left cyclic shift
	
	// array input
	get_array(input_arr, n);
	
	// array processing
	shift_array(input_arr, output_arr, n);
	
	// array output
	output_array(input_arr, output_arr, n);
	
}

int main(){
	task1();
	task2();
	task3();
	
	return 0;
}
