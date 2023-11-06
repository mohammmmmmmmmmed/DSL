#include <stdio.h>
void selectionSort(int arr[], int n ) {
	int i, j, position, swap;
   	for (i = 0; i < (n - 1); i++) {
      		position = i;
      		for (j = i + 1; j < n; j++) {
         		if (arr[position] > arr[j]) {
            			position = j;
            		}
      		}
      		if (position != i) {
        		swap = arr[i];
        		arr[i] = arr[position];
        		arr[position] = swap;
      		}
   	}
	
	printf("New array: ");
	for(i=0; i<n; i++) {
		printf("%d ", arr[i]);	
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
	selectionSort(a, size);
}

