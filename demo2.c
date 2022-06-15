#include <stdio.h>

int sum (int a,int b){
  return a + b;
}

void main() {
  int tinhTong;
  tinhTong = sum(10,10);
  printf("Tong la %d\n",tinhTong);
}
