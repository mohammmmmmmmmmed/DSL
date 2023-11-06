#include<stdio.h>
int main(){
	   int arr[40],pos,i,size,value;
	   printf("Enter no of elements in array of array: ");
	   scanf("%d",&size);
	   printf("enter  elements: \n");
	   for(i=0;i<size;i++)
	      scanf("%d",&arr[i]);
	   printf("Enter the position where you want to insert the element: ");
	   scanf("%d",&pos);
	   printf("Enter the value into that position: ");
	   scanf("%d",&value);
	   for(i=size-1;i>=pos-1;i--) {
	      arr[i+1]=arr[i];
	   }
	   arr[pos-1]= value;
	   printf("Final array after inserting the value is ");
	   for(i=0;i<=size;i++)
	      printf("%d ",arr[i]);

}
