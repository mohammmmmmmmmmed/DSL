#include <stdio.h>
void bubbleSort(int array[], int size) {
	int i, j, swap;
	for (i =0; i<size; i++) {
		for (j=0; j<size-i-1; j++) {
			if (array[j]>array[j+1]) {
				swap = array[j];
				array[j]=array[j+1];
				array[j+1]=swap;
			}
		}
	}
	
	printf("New array: ");
	for(i=0; i<size; i++) {
		printf("%d ", array[i]);	
	}
}	
int main() {
	int a[50];
	int i, size; 
	printf("Enter array size: ");
	scanf("%d", &size);
	for(i=0; i<size; i++) {
		printf("Enter element: ");
		scanf("%d", &a[i]);	
	}
	bubbleSort(a, size);
}

