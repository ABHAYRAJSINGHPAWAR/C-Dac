#include<stdio.h>

//Write a program to find a pair with given sum in the array.

void findPair(int arr[], int size, int target){
	int found = 0;
	
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if((arr[i]+arr[j]) == target){
				found = 1;
				printf("Pair=(%d,%d)\n",i,j);
				break;
			}
		}
		if(found ==1) break;
	}
	
	if(found == 0) printf("No pair found.\n");
	
}

int main(){
	int arr[] = {1,2,3,6,4,9,5}, target=10;
	findPair(arr,7,target);
	return 0;
}


