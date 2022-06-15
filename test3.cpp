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

int sapXepChon(int array[],int n){
	int i,j,min_index;
	for(i=0; i<n-1;i++){
		min_index=i;
		for(j=i+1;j<n;j++){
			if(array[j]<array[min_index]){
				min_index=j;
			}
		}
		swap(array[min_index], array[i]);
	}
}

int main(){
	int array[4]={9,2,1,6};
	printf("Mang chua sap xem\n");
	xuat(array,4);
//	sapXepNoi(array,4);
	sapXepChon(array,4);
	printf("\nMang da sap xem\n");
	xuat(array,4);	
}

//int i,j;
//		
//	for(i=0;i<n-1;i++){
//		for(j=n;j>i;j--){
//			if(array[j]<array[j-1]){
//				swap( array[j-1],array[j]);
//			}
//		}
//		
//	}
