#include <stdio.h>
#include <math.h>
#include "statistics.h"
#include "output_array.h"

//Sum Function
double sum(int arr[], int n){
	double s = 0;
	for (int i=0; i < n; i++){
		s += arr[i];
	}
	return s;	
}

//Average Function 
double average(int arr[], int n){

	return sum(arr, n) / n;	
}

//Standard Deviation Function
double standardDeviation(int arr[], int n){

	double avg = average(arr, n);
	double variance = 0.0;
	for(int i = 0; i < n; i++){
		variance += (arr[i] - avg)* (arr[i] - avg);
	}
	return sqrt(variance / n);

}

int arrayMax(int arr[], int n){
	int max = arr[0];
	for(int i=1; i<n; i++){
		if (arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int arrayMin(int arr[], int n){
	int min = arr[0];
	for(int i=1; i<n; i++){
		if (arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}

int difference(int arr[], int n){
	int max = arrayMax(arr, n);
	int min = arrayMin(arr, n);
	int difference = (max-min);
	return difference;
}



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
	printf("Array 1: sum = %.2f, average = %.2f, std = %.2f, max= %d, min= %d, difference= %d\n", 
		sum(arr1, n1), average(arr1, n1), standardDeviation(arr1, n1), arrayMax(arr1, n1), arrayMin(arr1,n1), difference(arr1,n1));

	//Array 2 results
	printf("Array 2: sum = %.2f, average = %.2f, std = %.2f, max= %d, min= %d, difference= %d\n", 
		sum(arr2, n2), average(arr2, n2), standardDeviation(arr2, n2), arrayMax(arr2, n2), arrayMin(arr2,n2), difference(arr2,n2));

	//Array 3 results
	printf("Array 3: sum = %.2f, average = %.2f, std = %.2f, max= %d, min= %d, difference= %d\n", 
		sum(arr3, n3), average(arr3, n3), standardDeviation(arr3, n3), arrayMax(arr3, n3), arrayMin(arr3,n3),difference(arr3, n3));

	output_array(arr1, n1);
	output_array(arr2, n2);
	output_array(arr3, n3);

	return 0;
}