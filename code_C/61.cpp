#include <stdio.h>
int a[100][100];
int m,n;
int nhapmatran(int a[100][100],int &m,int &n){
	printf("nhap kich co ma tran");
	scanf("%d%d",&m,&n);
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
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
int chuyenvi (int a[100][100],int &m ,int &n){
	int b[100][100];
	int temp;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			b[i][j]=a[j][i];
		}
	}
    temp=m;
    m=n;
    n=temp;
    for (int i=0;i<m;i++ )
    {
    	for(int j=0;j<n;j++){
    		a[i][j]=b[i][j];
		}
	}
}
main(){
	nhapmatran(a,m,n);
	xuatmatran(a,m,n);
	chuyenvi(a,m,n);
	xuatmatran(a,m,n);
}
