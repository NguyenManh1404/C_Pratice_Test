//#include <stdio.h>
//#include <string.h>
//
//struct book{
//	char name[9];
//	int code;
//	double price;
//};
//
//void bookInput(){
//	
//}
//int main(){
//	int i;
//	struct book programmingBook;
//	struct book arrayStruct[3];
//	
//	printf("Enter name of book ");
//	gets(programmingBook.name);
//	printf("\nEnter code of book ");
//	scanf("%d",&programmingBook.code);
//	printf("\nEnter price of book ");
//	scanf("%lf",&programmingBook.price);
//	printf("%s",programmingBook.name);
//	printf("%d",programmingBook.code);
//	printf("%lf",programmingBook.price);
//	
//}



#include <stdio.h>
#include <string.h>

struct book{
	char name[9];
	int code;
	double price;
};

void bookInput(struct book *ptrBook){
	int i;
	for(i =0; i<3; i++){
		printf("Enter name of book  %d ",i+1);
		fflush(stdin);
		gets((ptrBook+i)->name);
		printf("\nEnter code of book  %d ",i+1);
		scanf("%d",&(ptrBook+i)->code);
		printf("\nEnter price of book  %d ",i+1);
		scanf("%lf",&(ptrBook+i)->price);
		printf("\n");
		printf("\n");
	}
}

void bookOut(struct book *ptrBook){
	int i;
	for( i=0; i<3; i++){
		printf("\n");
		printf("\nName of book  %d ",i+1);
		puts((ptrBook+i)->name);
		printf("Code of book %d is  %d ",i+1,(ptrBook+i)->code);
		printf("\nPrice of book %d is  %lf ",i+1,(ptrBook+i)->price);
	}
}

int main(){

	struct book arrayStruct[3];
	struct book *ptrBook = arrayStruct;
	
	bookInput(ptrBook);
	bookOut(ptrBook);
}
