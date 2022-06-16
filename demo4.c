#include <stdio.h>
#include <string.h>
struct book{
	char name[30];
	int code;
	double price;
};
void main(){
	struct book programmingBook;
	
	printf("Enter name");
	gets(programmingBook.name);
	printf("Enter code");
	scanf("%d",&(programmingBook.code));
	printf("Enter price");
	scanf("%lf",&(programmingBook.price));
	
	printf("%s",programmingBook.name);
	printf("code is %d \n",programmingBook.code);
	printf("price is %lf \n",programmingBook.price);
}
