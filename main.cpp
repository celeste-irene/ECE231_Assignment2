#include <iostream>
#include <cmath>
#include "statistics.h"

using namespace std;


int main(){
	//Defining arrays with arbitrary numbers
	int arr1[]= {1, 2, 3, 4, 5};
	int arr2[]= {5, 10, 15, 20, 25, 30};
	int arr3[]= {723, 58, 391, 864, 245, 17, 690, 432, 999, 108};

	//Calculating array lengths. We use sizeof function to count how many bytes are in each array, 
	//and divide by how many bytes are in each element.
	int n1 = sizeof(arr1)/sizeof(arr1[0]);
	int n2 = sizeof(arr2)/sizeof(arr2[0]);
	int n3 = sizeof(arr3)/sizeof(arr3[0]);

	
	//Array 1 results
	cout <<"Array 1: sum = "<< sum(arr1, n1) << 
		", average = " << average(arr1, n1) << 
		", std = " << standardDeviation(arr1, n1) <<  
		", max = " << arrayMax(arr1, n1) <<
		", min = " << arrayMin(arr1,n1) << 
		", difference = " << difference(arr1,n1) << endl; 
	//Array 2 results
	cout <<"Array 2: sum = "<< sum(arr2, n2) << 
		", average = " << average(arr2, n2) << 
		", std = " << standardDeviation(arr2, n2) <<  
		", max = " << arrayMax(arr2, n2) <<
		", min = " << arrayMin(arr2,n2) << 
		", difference = " << difference(arr2,n2) << endl; 
	//Array 3 results
	cout <<"Array 3: sum = "<< sum(arr3, n3) << 
		", average = " << average(arr3, n3) << 
		", std = " << standardDeviation(arr3, n3) <<  
		", max = " << arrayMax(arr3, n3) <<
		", min = " << arrayMin(arr3,n3) << 
		", difference = " << difference(arr3,n3) << endl; 
	cout << "--------"<< endl;
	cout << " "<<endl;
	cout << "Array Outputs: "<< endl;
	cout << "Array 1"<<endl;
	outputArray(arr1, n1);
	cout << " "<<endl;
	cout << "Array 2"<<endl;
	outputArray(arr2, n2);
	cout << " "<<endl;
	cout << "Array 3"<<endl;
	outputArray(arr3, n3);
	
	
	return 0;
}