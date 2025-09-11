// xoa 1 hang hoac 1 cot trong mang 2 chieu
#include <stdio.h>
int a[100][100];
int m,n;
int nhapmatran (int a[100][100], int &m, int &n){
	printf("nhap kich co ma tran");
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
int xuatmatran (int a[100][100],int m,int n){
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int xoa1hang(int a[100][100],int &m,int n){
	int x;
	printf("nhap hang can xoa ");
	scanf("%d",&x);
	for (int i=x-1;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j]=a[i+1][j];
			
		}
	}
	m=m-1;
}
int xoa1cot(int a[100][100],int m,int &n){
	int x;
	printf("nhap cot can xoa");
	scanf("%d",&x);
	for (int i=0;i<m;i++){
		for (int j=x-1;j<n;j++){
			a[i][j]=a[i][j+1];
		}
	}
	n=n-1;
}
main(){
	nhapmatran(a,m,n);
	xuatmatran(a,m,n);
	xoa1hang(a,m,n);
	xoa1cot(a,m,n);
	xuatmatran(a,m,n);
	
}
