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
void sapxeptangdan(int x[100],int n){
	int tam;
	for(int i=1;i<n;i++){
		for(int j=0;j<n;j++){
			if (x[i]<x[j]) {
				tam=x[i];
				x[i]=x[j];
				x[j]=tam;
			}
		}
	}
	}
void tronmang(int x1[100],int n_x1, int x2[100], int n_x2,int x3[300], int &n_x3){
	n_x3=n_x1+n_x2;
	int i3=0;
	int i2=0;
	int i1=0;
	while (i3<n_x3){
		if(i1>=n_x1) {
			x3[i3]=x2[i2];
			i2++;
		} else  if (i2>=n_x2) {
			x3[i3]=x1[i1];
			i1++;
		} else if (x1[i1]<x2[i2]){
			x3[i3]=x1[i1];
			i1++;
		} else 
		{
			x3[i3]=x2[i2];
			i2++;
		}
	
	i3++;
	} }
main(){
	nhapmang(x1,n1);
	sapxeptangdan(x1,n1);
	xuatmang(x1,n1);
	nhapmang(x2,n2);
	sapxeptangdan(x2,n2);
	xuatmang(x2,n2);
	tronmang(x1,n1,x2,n2,x3,n3);
	xuatmang(x3,n3);
	
	
	
}
