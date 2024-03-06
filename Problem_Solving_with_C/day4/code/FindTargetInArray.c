#include<stdio.h>
// Write a program to find the number of times a given number appears in an array

void populateData(int arr[], int size);
int find(int arr[], int size, int target);

int main(){
	int size;
	printf("Enter array size:\n");
	scanf("%d", &size);
	
	int arr[size], target, freq;
	
	populateData(arr, size);
	
	printf("Enter target to search:\n");
	scanf("%d", &target);
	
	freq = find(arr, size, target);
	printf("%d appears %d times.\n",target,freq);

	return 0;
}

void populateData(int arr[], int size){
	printf("Enter %d numbers:\n",size);
	for(int i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}
}

int find(int arr[], int size, int target){
	int freq = 0;
	for(int i=0;i<size;i++){
		if(arr[i] == target){
			freq = freq + 1;
		}
	}
	
	return freq;
}