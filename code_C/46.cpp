// tao menu 
#include<stdio.h>
#include <conio.h>
int a[100];
int n;
void nhapmang(int a[100],int &n){
	do
	{
	printf("nhap n");
	scanf("%d",&n);}
	while (n<0 || n>100);
	for (int i=0;i<n;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	}
void xuatmang(int a[100],int n){
	for (int i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}
void chenvaocuoimang(int a[100],int &n){
	int x;
	printf("\nnhap gia tri can chen vao cuoi mang:");
	scanf("%d",&x);
	int size=sizeof(a)/sizeof(a[0]);
	if (size==n)
	{
		printf("khong the them vao mang");
	}
	a[n]=x;
	n++;
	
}
// loi chen vi tri(mai lam tiep:))) )
void chen_vao_1_vi_tri(int a[100],int &n){
	int x,y;
	printf("nhap gia tri can chen");
	scanf("%d",&x);
	printf("nhap vao vi tri can chen");
	scanf("%d",&y);
	n++;
	for (int i=n-1;i>y-1;i--){
	  a[i]=a[i-1];
	}
	a[y-1]=x;  
} 
void chenvaodaumang(int a[100],int &n){
	int z;
	printf("\nnhap gia tri can cheo vao dau mang"); scanf("%d",&z);
	int size=sizeof(a)/sizeof(a[0]);
	if (size==n){
		printf("khong the chen them vao mang ");
	}
	n++;
	for (int i=n-1;i>0;i--){
		a[i]=a[i-1];
	}
	a[0]=z;
	
}

main(){
	char gt;
	do{ 
	printf("\n----MENU----");
	printf("\nnhap phim 1 de nhap mang");
	printf("\nnhap phim 2 de xuat mang");
	printf("\nnhap phim 3 de chen vao dau mang");
	printf("\nnhap phim 4 de chen vao cuoi mang");
	printf("\nnhap phim 5 de chen vao 1 vi tri bat ky trong mang"); 	
	printf("\nnhan phim 0 de thoat");
	scanf("%d",&gt);
	if (gt==1){
		nhapmang(a,n);
	} else if(gt==2) {
		xuatmang(a,n);
	} else if(gt==3){
		chenvaodaumang(a,n);
	}
	else if(gt==4){
		chenvaocuoimang(a,n);
	}
	else if (gt==5){
		chen_vao_1_vi_tri(a,n);
	}
	} while (gt!=0); 

	}
