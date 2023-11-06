#include <stdio.h>
void binarySearch(int array[], int size, int query ) {
	int i, mid, high, low, flag;
	high = size;
	low=0;
	while(low<=high) {
		mid =(high+low)/2;
		if(array[mid]==query) {
			printf("Element found at index %d", mid);
			flag++;
			break;
		} else if(query<array[mid]) {
			high= mid-1;
		} else if(query>array[mid]) {
			low= mid+1;
		}  
	
	}
	if(flag==0) {
		printf("Element doesn't exist.");
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
	printf("Enter element to be searched: ");
	scanf("%d", &query);
	binarySearch(a, size, query);
}

