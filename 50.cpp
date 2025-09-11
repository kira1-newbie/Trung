#include <stdio.h>
/* 1 3 5 6 8 6 5 5 9 
   4 3 2 1 2 1 3 2 1 <-- xuat mang dai nhat khong giam: 1 3 5 6 8       */
int a[100];
int n;
void nhapmang(int x[100], int &n)
{
	do{
		printf("\nnhap n");
		scanf("%d",&n);
	} while (n<0|| n>100);
	for (int i=0;i<n;i++) {
		printf("a[%d]",i);
		scanf("\n%d",&x[i]);
	}
}
void xuatmang(int x[100], int n){
	for (int i=0;i<n;i++){
		printf("\n%d",x[i]);
	}
}
int timmax(int x[100],int n){
	int max=x[0];
	
	for (int i=1;i<n;i++){
		if (x[i]>max) {
			max=x[i];
			
		}
	}
	return max;
}
void mangkhonggiam(int x[100],int n){
	int b[100];
	for (int i=0;i<n;i++){
	b[i]=1;}
	for (int i=n-1;i>0;i--){
		if (x[i]>=x[i-1]){
			b[i-1]=b[i]+1;
		} }
		int sl=timmax(b,n);
		for (int i=0;i<n;i++){
		  if (b[i]==sl){
		  	for(int j=i;j<sl+i;j++){
		  		printf(" %d",x[j]);
			  }
		  }
		  
		}
	
}
main(){
	nhapmang(a,n);
	xuatmang(a,n);
	mangkhonggiam(a,n);
	
}
