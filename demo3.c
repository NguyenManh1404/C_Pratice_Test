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
//	printf("a là %d\n b là %d\n",a ,b);
//}

int swap(int a,int b){
	int tamp = a;
	a =b;
	b=tamp;
}

void main(){
	int a =100;int b =200;
	
	swap(a,b);
	printf("a là %d\nb là %d\n",a ,b);
}

