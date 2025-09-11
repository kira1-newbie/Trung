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
int maxhang(int a[100][100],int m,int n){
	int max=a[m][0];
		for (int j=0;j<n;j++){
			if (a[m][j]>max){
				max=a[m][j];
			}
		}
	
	return max;
}
int minhang(int a[100][100],int m,int n){
	int min=a[m][0];
	
		for (int j=0;j<n;j++){
			if (a[m][j]<min){
				min=a[m][j];
			
		}
	}
	return min;
}
int maxcot(int a[100][100],int m,int n){
	int max=a[0][n];
		for (int i=0;i<n;i++){
			if (a[m][i]>max){
				max=a[m][i];
			}
		}
	
	return max;
}
int mincot(int a[100][100],int m,int n){
	int min=a[m][0];
	
		for (int i=0;i<n;i++){
			if (a[m][i]<min){
				min=a[m][i];
			
		}
	}
	return min;
}
main (){
	int b,c;
	printf("nhap kich thuoc ma tran");
	scanf("%d%d",&m,&n);
	nhapmatran(a,m,n);
	xuatmatran(a,m,n);
	printf("nhap hang ");
	scanf("%d",&b);
	printf("\n max %d",maxhang(a,b-1,n));
	printf("\n min %d",minhang(a,b-1,n));
	printf("nhap cot "); 
	scanf("%d",&c);
	printf("\n max %d",maxcot(a,c-1,n));
	printf("\n min %d",mincot(a,c-1,n));
	getch();
}

