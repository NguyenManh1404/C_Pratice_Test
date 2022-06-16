#include <stdio.h>
#include <string.h>
struct book{
	char name[30];
	int code;
	double price;
};


void nhap(struct book *ptrBook){
	int i;
	for(i=0; i<3;i++){
		printf("Enter name of book %d ", i+1);
		fflush(stdin);
		gets((ptrBook+i)->name);
		printf("\nEnter code of book %d ", i+1);
		scanf("%d",&(ptrBook+i)->code);
		printf("\nEnter price of book %d ", i+1);
		scanf("%lf",&(ptrBook+i)->price);
		printf("\n");
	}
}

void xuat(struct book *ptrBook){
	int i;
	for(i=0; i<3;i++){
		printf("name of book %d is %s",i+1,(ptrBook+i)->name);
		printf("code of book %d is %d \n",i+1,(ptrBook+i)->code);
		printf("price of book %d is %lf \n",i+1,(ptrBook+i)->price);
	}
}
void main(){
	struct book programmingBook;
	
	struct book arrayStruct[3];
	
	struct book *ptrBook;
	
	ptrBook = arrayStruct;
	
	nhap(ptrBook);
	xuat(ptrBook);
	
//	printf("Enter name");
//	gets(programmingBook.name);
//	printf("Enter code");
//	scanf("%d",&(programmingBook.code));
//	printf("Enter price");
//	scanf("%lf",&(programmingBook.price));
//	
//	printf("%s",programmingBook.name);
//	printf("code is %d \n",programmingBook.code);
//	printf("price is %lf \n",programmingBook.price);
}
