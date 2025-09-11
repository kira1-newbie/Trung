// tach mang 
#include<stdio.h>
int x1[100],x2[100],x3[300];
int n1,n2,n3;
void nhapmang (int x[100],int &n){
	do {
		printf("nhap n");
		scanf("%d",&n);
	} while (n<0 || n>100);
	for (int i=0;i<n;i++){
	printf("nhap a[%d]",i);
	scanf("%d",&x[i]);
}
}
void xuatmang(int x[300],int n){
	for (int i=0;i<n;i++){
		printf("\na[%d]=%d",i,x[i]);
	}
}
void tachmang(int x[300],int n,int x1[100] ,int &n1,int x2[100],int &n2) {
	
	int i1=0; n1=0; n2=0;
	int i2=0;

	for (int i=0;i<n;i++)
	{
		if (x[i]%2==0){
			x1[i1]=x[i];
			i1++;
			n1++;
		} else {
		x2[i2]=x[i];
			i2++;
			n2++;
		}
		
	}
}
main(){
	nhapmang(x3,n3);
	tachmang(x3,n3,x1,n1,x2,n2);
	printf("day so chan");
	xuatmang(x1,n1);
	printf("\nday so le");
	xuatmang(x2,n2);
}
