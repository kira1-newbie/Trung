#include <stdio.h>
// tim kiem tren mang 1 chieu
int a[100];
int n;
void nhapmang(int a[100],int &n){
printf ("nhap n"); scanf("%d",&n);
for (int i=0;i<n;i++){
	printf("a[%d]",i);
	scanf("%d",&a[i]);
}	
}
void xuatmang(int a[100],int n)
{
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}
int timkiem(int a[100],int n,int tk){
  int kq=0;
  for (int i=0;i<n;i++){
  	if (a[i]==tk) {
  		kq=1;
  		return 1;
	  }
  }	
	return kq;
}
int thuchientimkiem(int a[100],int n){
	int tk;
	printf("nhap so can tim kiem:");
	scanf("%d",&tk);
	int kq=timkiem(a,n,tk);
	if (kq==1) {printf("tim thay");} else {printf("khong tim thay");};
	int tong;
	  for (int i=0;i<n;i++){if (a[i]==timkiem(a,n,tk)) {tong=tong+1;} }printf("%d",tong);
}
main(){
	nhapmang(a,n);
	xuatmang(a,n);
	thuchientimkiem(a,n);
	
	
	
}
