# Ôn tập ngôn ngữ C

## Cấu trúc của một chương trình C

1. Demo:

```c
  #include <stdio.h>
  init main(){
    printf("Hello world !!!"); // Hàm in ra
  }
```

## Các kiểu dữ liệu cơ bản trong C

1. Kiểu nguyên:

- char: %s
- int: %d
- long: %lli

2. Các kiểu số thực:

- float: %f
- double:%lf
- long double:

## Biến trong C

1. Biến trong C nó phân biệt chữ Hoa và chữ thường
2. Cách khái báo biến:

- Ko đặt trùng tên với những ký tự được quy định sắn

```c
  int a,c;
  float diemTrungBinh;
  char kiTu;
```

3. Các loại biến;

- Biến toàn cục
- Biến cục bộ

## Định dạng kiểu dữ liệu để nhập xuất dữ liệu

1. Demo

```c
char a; // %c
int b; // %i %d
long c; // %ld, %li
long long d; // %lld, %lli
float f; // %f
double e; // %lf, %fF
```

2. Nhập xuất giá trị từ bàn phím:

```c
  #include <stdio.h>

  int main(){
    int a;
    printf("Nhap tuoi cua ban");
    scanf("%d",&a);
    printf("Your age is %d\n",a);
  }
```

## Hằng

1. Demo

```c
  #define ab;
  const int number =123;
```

## Hàm

- Đẳng sau hàm ko có dấu **;**

```c
#include <stdio.h>

int sum (int a,int b){
  return a + b;
}

void main() {
  int tinhTong;
  tinhTong = sum(10,10);
  printf("Tong la %d\n",tinhTong); // có dấu ; sau khi viết lệnh đó
}
```

## Tham chiếu , tham trị

- Tham chiếu:

```c
  #include <stdio.h>

int swap(int *a,int *b){
	int tamp = *a;
	*a =*b;
	*b=tamp;
}

void main(){
	int a =100;int b =200;

	swap(&a,&b);
	printf("a là %d\n b là %d\n",a ,b);
}

// a lα 200
// b lα 100
```

- Tham trị:

```c
  #include <stdio.h>
int swap(int a,int b){
	int tamp = a;
	a =b;
	b=tamp;
}

void main(){
	int a =100;int b =200;

	swap(a,b);
	printf("a là %d\n b là %d\n",a ,b);
}

// a lα 100
// b lα 200
```

## Con trỏ:

1. Là một biển đặc biệt, nó lưu trữ địa chỉ của những biến bình thường.

```c
#include <stdio.h>
 int main()
 {
 int *ptr, a = 10;
 ptr = &a;
 *ptr += 1;
 printf("%d,%d/n", *ptr, a);
 }

 // ket qua là 11,11/n : boi vi ptr là dia chi cua a, cho nen khi thay doi theo kieu tham chieu nó se làm thay doi nhung gia tri nào tro den cung dia chi

```

# Bài Tập

## Đề bài 1:

```c
1. Create a void main()function to do these following actions:
a, Declare an array of Integer intArray with size 10
b, Declare a pointer int* ptrArray that points to intArray
c, Enter data to intArray by using pointer ptrArray and display these data to screen.

a, Khai báo mảng Integer intArray với kích thước 10;
b, Khai báo một con trỏ int * ptrArray trỏ đến intArray
c, Nhập data từ bàn phím và hiển thị data ra màn hình

giải
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

```

## Đề bài 2:

```c
 Apply Selection Sort algorithm for following array
 {5 ,7, 3 ,6}

 Áp dụng thuật toán Sắp xếp Lựa chọn cho mảng sau
 {5 ,7, 3 ,6}

 Write function of Selection Sort algorithm

 Viết hàm của thuật toán Sắp xếp lựa chọn


#include <stdio.h>

int swap(int &a, int &b){
	int tamp =a;
	a=b;
	b=tamp;
}

int sapXepLuaChon(int array[], int n){
	int i,j,min_index;
	for(i=0;i<n-1;i++){
		min_index=i;
		for(j=i+1;j<n;j++){
			if(array[j]<array[min_index]){
				min_index=j;
			}

		}
		swap(array[min_index],array[i]);
	}
}

int xuat(int array[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", array[i]);
	}
}

int main(){
	int array[4]={5,7,3,6};
	printf("Ham chua sap xep\n");
	xuat(array,4);
	sapXepLuaChon(array,4);
	printf("\nHam da sap xep\n");
	xuat(array,4);
}
```

## Đề bài 3:

```c
	Apply Bubble Sort algorithm for following array
	9 2 1 6

	Áp dụng thuật toán Sắp xếp nổi bọt cho mảng sau
	9 2 1 6

giải
#include <stdio.h>


int xuat(int array[], int n){
	for(int i =0; i<n;i++){
		printf("%d ",array[i]);
	}
}

int swap(int &a, int &b){
	int tamp= a;
	a=b;
	b=tamp;

}

int sapXepNoi(int array[], int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(array[j]<array[j-1]){
				swap(array[j],array[j-1]);
			}
		}
	}

}

int main(){
	int array[4]={9,2,1,6};
	printf("Mang chua sap xem\n");
	xuat(array,4);
	sapXepNoi(array,4);
	printf("\nMang da sap xem\n");
	xuat(array,4);
}


```

## Đề bài 4:

```c
	Create a void main()function to do these following actions
 Declare an variable struct book programmingBook and enter data for its attributes
 Declare an array struct book arrayStruct with size 3
 Declare a pointer struct book* ptrBook that points to the arrayStruct
 Enter data to the arrayStruct and display all attributes of each element to screen by
using pointer ptrBook


Tạo một hàm void main () để thực hiện các hành động sau
 Khai báo một biến struct book programmingBook và nhập dữ liệu cho các thuộc tính của nó
-------------------
#include <stdio.h>
#include <string.h>

struct book{
	char name[9];
	int code;
	double price;
};

void bookInput(){

}
int main(){
	int i;
	struct book programmingBook;
	programmingBook.code=12;
	printf("Enter name of book ");
	gets(programmingBook.name);
	printf("\nEnter code of book ");
	scanf("%d",&programmingBook.code);
	printf("\nEnter price of book ");
	scanf("%lf",&programmingBook.price);
	printf("%s",programmingBook.name);
	printf("%d",programmingBook.code);
	printf("%lf",programmingBook.price);

}
---------------
 Khai báo một mảng struct book arrayStruct với kích thước 3
 Khai báo một sách struct con trỏ * ptrBook trỏ đến arrayStruct
 Nhập dữ liệu vào arrayStruct và hiển thị tất cả các thuộc tính của từng phần tử ra màn hình
sử dụng con trỏ ptrBook




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
```
