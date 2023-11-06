
#include <stdio.h>

void insertionSort(int array[], int size) {
	int i;
  	for (int step = 1; step < size; step++) {
    		int key = array[step];
    		int j = step - 1;

    		while (key < array[j] && j >= 0) {
      			array[j + 1] = array[j];
      			--j;
    		}
    		array[j + 1] = key;
  	}
  	printf("New array: ");
	for(i=0; i<size; i++) {
		printf("%d ", array[i]);	
	}
}

int main() {
	int a[50];
	int i, size, query; 
	printf("Enter array size: ");
	scanf("%d", &size);
	for(i=0; i<size; i++) {
		printf("Enter element: ");
		scanf("%d", &a[i]);	
	}
  	insertionSort(a, size);
}
