#include <stdio.h>
int a[100][100];
int m,n;
int nhapmatran(int a[100][100],int &m,int &n)
{
 for(int i=0;i<m;i++){
 	for (int j=0;j<n;j++)
 	{
 		printf("a[%d][%d]",i,j);
 		scanf("%d",&a[i][j]);
	 }
 }	
}
int xuatmatran(int a[100][100],int m,int n){
	 for(int i=0;i<m;i++){
 	for (int j=0;j<n;j++)
 	{
 		printf("%d",a[i][j]);
 	
	 }
 }
}
// tim kiem vi tri cua so do
int tim_kiem_vi_tri(int a[100][100],int m, int n,int &b){
	
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++)
		{
			if (a[i][j]==b){
				printf("\n a[%d][%d]",i,j);
			}
		}
	}
}
void kq_tim_kiem (int a[100][100], int m,int n,int &c){
	int d=0;
   	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++)
		{
			if (a[i][j]==c){
				d=a[i][j];
				
			}
			}
		}
		if(d==c){ printf("tim thay");
		} else {printf("khong tim thay");
		}
	}

main (){
	int b;
	printf("nhap kich co ma tran"); scanf("%d %d",&m,&n);
	nhapmatran(a,m,n);
	xuatmatran(a,m,n);
	printf("\n nhap so can tim kiem"); scanf("%d",&b);
	kq_tim_kiem(a,m,n,b);
	tim_kiem_vi_tri(a,m,n,b);
}
