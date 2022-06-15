#include <stdio.h>

void main(){
	int array[10];
	int *ptrArray;
	ptrArray = array;
	int i;	
	
	for(i=0;i<10;i++){
		printf("Enter number %d\n",i);
		scanf("%d",ptrArray+i);
	}
	
	for(i=0;i<10;i++){
		printf("%d",*(ptrArray+i));
	}
}
