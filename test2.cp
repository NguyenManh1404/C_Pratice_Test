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


//	int i,j,min;
//	for(i=0;i<n-1;i++){
//		min=i;
//		for(j=i+1;j<n;j++)
//			if(array[j]<array[min])
//					min=j;
//					swap(array[min],array[i]);
//	}
