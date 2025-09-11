// doi 2 cot hoac 2 hang cua mang 2 chieu
#include <stdio.h>
int a[100][100];
int m,n;
int nhapmatran(int a[100][100],int &m,int &n){
	printf("nhap kich co ma tran");
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			printf("\n a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
int xuatmatran(int a[100][100],int m,int n){
	for (int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int doicotmatran(int a[100][100],int m,int n){
	int x,y;
	int temp;
	do{
	
	 printf("nhap cot can thay doi vi tri");
	 scanf("%d%d",&x,&y);} while (x>n||y>n);
	for (int i=0;i<m;i++){
		temp=a[i][x-1];
		a[i][x-1]=a[i][y-1];
		a[i][y-1]=temp;	
		}
		
		
}
int doihangmatran(int a[100][100],int m,int n){
	int x,y;
	int temp;
	Nhap:
		{
			printf("nhap hang can thay doi vi tri");
			scanf("%d%d",&x,&y);
		
		} if (x>m||y>m) goto Nhap;
		
	for (int j=0;j<n;j++){
		temp=a[x-1][j];
		a[x-1][j]=a[y-1][j];
		a[y-1][j]=temp;
	}
}		
	
main(){
	nhapmatran(a,m, n);
	xuatmatran(a,m,n);
	doicotmatran(a,m,n);
	xuatmatran(a,m,n);
	doihangmatran(a,m,n);
	xuatmatran(a,m,n);
}
