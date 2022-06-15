#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
char name[50];
float alg2;
float csdl;
float english;
char xeploai[20];
float tb;
};

void studentInput(struct student *f,int n){
int i,kt=0;
for(i=0;i<n;i++){
printf("\nNhap thong tin hoc sinh %d:\n",i+1);
printf("Ten: ");
fflush(stdin);
gets((f+i)->name);
do{
if(kt==1)
printf("Diem vuot gioi han!\n");
printf("Nhap diem(0.00-10.00):\n");
printf("ALG2: ");
scanf("%f",&(f+i)->alg2);
printf("English: ");
scanf("%f",&(f+i)->english);
printf("Co so du lieu:");
scanf("%f",&(f+i)->csdl);
if((f+i)->alg2<0||(f+i)->alg2>10||(f+i)->english<0||(f+i)->english>10||(f+i)->csdl<0||(f+i)->csdl>10)
kt=1;
}while((f+i)->alg2<0||(f+i)->alg2>10||(f+i)->english<0||(f+i)->english>10||(f+i)->csdl<0||(f+i)->csdl>10);
}
}

void studentOutput(struct student *f,int n){
int i;
float tb;
printf("\n-----Bang diem hoc sinh-----\n");
for(i=0;i<n;i++){
printf("\nTen: %s\n",(f+i)->name);
printf("ALG2: %.1f\n",(f+i)->alg2);
printf("Co so du lieu: %.1f\n",(f+i)->csdl);
printf("English: %.1f\n",(f+i)->english);
printf("Diem trung binh: %.1f\n",(f+i)->tb);
printf("Xep loai: %s\n",(f+i)->xeploai);
}
}

void diemTB(struct student *f,int n){
int i;
for (i=0;i<n;i++){
(f+i)->tb=((f+i)->alg2+(f+i)->csdl+(f+i)->english)/3;
}
}
void xeploai(struct student *f,int n){
int i;
for (i=0;i<n;i++){
if((f+i)->tb>=9.0 && (f+i)->tb<=10)
strcpy((f+i)->xeploai,"Xuat sac");
else if((f+i)->tb>=8.0 && (f+i)->tb<9)
strcpy((f+i)->xeploai,"Gioi");
else if((f+i)->tb>=6.5 && (f+i)->tb<8)
strcpy((f+i)->xeploai,"Kha");
else if((f+i)->tb>=5.0 && (f+i)->tb<6.5)
strcpy((f+i)->xeploai,"Trung Binh");
else if((f+i)->tb>=4.0 && (f+i)->tb<5.0)
strcpy((f+i)->xeploai,"Yeu");
else
strcpy((f+i)->xeploai,"Kem");
}
}

void sapxep(struct student *f,int n){
int i,j;
struct student tg;
for(i=0;i<n;i++){
for(j=i+1;j<n;j++)
if((f+i)->tb<(f+j)->tb){
tg=*(f+i);
*(f+i)=*(f+j);
*(f+j)=tg;
}
}
}

void thilaiCSDL(struct student *f,int n){
int i,dem=0;
for(i=0;i<n;i++){
if((f+i)->csdl<5)
dem=dem+1;
}
if(dem!=0){
printf("\nSo hoc sinh thi lai mon Co so du lieu: %d.",dem);
for(i=0;i<n;i++){
if((f+i)->csdl<5)
printf("\nTen: %s,\tDiem CSDL: %.2f",(f+i)->name,(f+i)->csdl);
}
}
else
printf("\nKhong co hoc sinh nao thi lai mon Co so du lieu.");
}

void thilaiALG2(struct student *f,int n){
int i,dem=0;
for(i=0;i<n;i++){
if((f+i)->alg2<5)
dem=dem+1;
}
if(dem!=0){
printf("\n\nSo hoc sinh thi lai mon Thuat toan va cau truc du lieu(ALG2) : %d.",dem);
for(i=0;i<n;i++){
if((f+i)->alg2<5)
printf("\nTen: %s,\tDiem ALG2: %.2f",(f+i)->name,(f+i)->alg2);
}
}
else
printf("\nKhong co hoc sinh nao thi lai mon Thuat toan va cau truc dulieu (ALG2).");
}

void main(){
int n,dem;
printf("Nhap so luong sinh vien: ");
scanf("%d",&n);
struct student f[n];
studentInput(f,n);
diemTB(f,n);
xeploai(f,n);
sapxep(f,n);
studentOutput(f,n);
thilaiCSDL(f,n);
thilaiALG2(f,n);
}



