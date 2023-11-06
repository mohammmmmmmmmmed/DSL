#include <stdio.h>
int main() {
	int i, query, arr[50], flag;
	for(i=0; i <11; i++) {
		arr[i] = i*10;
	}
	printf("Enter element to be searched: ");
	scanf("%d", &query);
	for(i=0; i <51; i++) {
		if (query==arr[i]) {
			printf("Element found at index %d.", i);
			flag++;
		}
	}
	if(flag==0) {
		printf("Element not found.");
	}
}
