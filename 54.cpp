#include <stdio.h>
#include<conio.h>
int a[100][100];
int m,n;
int nhapmatran(int a[100][100],int &m,int &n){
	for(int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			printf("a[%d][%d]",i,j);
	        scanf("%d",&a[i][j]);
		}
	}
}
int xuatmatran(int a[100][100],int m, int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
	}
}
int maxmatran(int a[100][100],int m,int n){
	int max=a[0][0];
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if (a[i][j]>max){
				max=a[i][j];
			}
		}
	}
	return max;
}
int minmatran(int a[100][100],int m,int n){
	int min=a[0][0];
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if (a[i][j]<min){
				min=a[i][j];
			}
		}
	}
	return min;
}



main (){
	printf("nhap kich thuoc ma tran");
	scanf("%d%d",&m,&n);
	nhapmatran(a,m,n);
	xuatmatran(a,m,n);
	printf("\n max %d",maxmatran(a,m,n));
	printf("\n min %d",minmatran(a,m,n));
	getch();
}
