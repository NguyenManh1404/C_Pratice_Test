#include <stdio.h>

//int swap(int *a,int *b){
//	int tamp = *a;
//	*a =*b;
//	*b=tamp;
//}
//
//void main(){
//	int a =100;int b =200;
//	
//	swap(&a,&b);
//	printf("a l� %d\n b l� %d\n",a ,b);
//}

int swap(int a,int b){
	int tamp = a;
	a =b;
	b=tamp;
}

void main(){
	int a =100;int b =200;
	
	swap(a,b);
	printf("a l� %d\nb l� %d\n",a ,b);
}

