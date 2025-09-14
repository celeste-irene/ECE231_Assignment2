#include <iostream>
#include "statistics.h"
#include <cmath>

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

