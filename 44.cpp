// xoa 1 phan tu trong mang (theo vi tri ,theo gia tri)
#include<stdio.h>
int a[100];
int n;
void nhapmang(int a[100],int &n){
	do {
		printf("nhap n");
		scanf("%d",&n);
	} while (n<0 || n>100);
	for (int i=0;i<n;i++) {
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void xoamangtaivitri(int a[100],int &n,int vi_tri){

	for (int i=vi_tri;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
}
void xoamangtheogiatri(int a[100],int &n){ int gt;
	printf("nhap gia tri can xoa");scanf("%d",&gt);
	for (int i=0;i<n-1;i++){
		if (a[i]==gt){
			xoamangtaivitri(a,n,i);
		}
	}
}
void thuchienxoatheovitri(int a[100],int &n){
	int vitri;
	printf("nhap vi tri can xoa"); scanf("%d",&vitri);
	xoamangtaivitri(a,n,vitri);
	}
void xuatmang(int a[100],int n){
 for(int i=0;i<n;i++){
 	printf("\n%d",a[i]);}
}
main (){
	nhapmang(a,n);
	xoamangtheogiatri(a,n);
	xuatmang(a,n);
	thuchienxoatheovitri(a,n);
	xuatmang(a,n);
	
}
