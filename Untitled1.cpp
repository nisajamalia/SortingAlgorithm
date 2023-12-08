#include <stdio.h>

//Swap Function
void swap(int* num1,int* num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

//Printing Fnction
void print(int arr[], int size){
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
}

//Bubble Sort
void bubbleSort(int arr[], int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size-i-1;j++){
			if(arr[j+1]<arr[j]){
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

//Selection Sort Function
void selectionSort(int arr[], int size){
	for(int i=0;i<size;i++){
		int minIdx = i;
		for(int j=i+1;j<size;j++){
			if(arr[j]<arr[minIdx]){
				minIdx = j;
			}		
		}
		swap(&arr[i], &arr[minIdx]);
	}
}

//Insertion Sort Function
insertionSort(int arr[], int size){
	int i, j, key;
	for(i=1;i<size;i++){
		key = arr[i];
		j = i-1;
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}

int main() {
	
	int arr[] = {5, 100, 7, 2, 15, 3};
	int size = sizeof(arr)/4;
	
	//Bubble Sort
//	bubbleSort(arr, size);

	//Selection Sort
//	selectionSort(arr, size);
    
    //Insertion Sort
    insertionSort(arr, size);
	
	//Printing
	print(arr, size);
	
	

	return 0;
}
