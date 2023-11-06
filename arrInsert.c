#include <stdio.h>
int main() {
	int i, size, arr[50];
	printf("Enter size: ");
	scanf("%d", &size);
	for(i=0; i<size; i++) {
		printf("Enter element: ");
		scanf("%d", &arr[i]);
		printf("\n");
	}
	for(i=0; i<size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	


}
