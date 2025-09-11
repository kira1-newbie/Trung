#include <stdio.h>
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
			printf("\n %d",a[i][j]);
		}
	}
}
float tinhtrungbinhcong(int a[100][100],int m,int n){
 int x;
 x=m*n;
 float tong=0;
 for(int i=0;i<m;i++){
 	for(int j=0;j<n;j++){
 		tong=tong+a[i][j];
	 }
 }
 float c=(float)tong/(float)x;
 printf("\n%f",c);
 
}
// tbc chia het cho 5
float tbc(int a[100][100],int m,int n){
 int x=0;
 float tong=0;
 for(int i=0;i<m;i++){
 	for(int j=0;j<n;j++){
 		
 		if(a[i][j]%5==0) {
		 tong=tong+a[i][j];
		 x=x+1;}
	 }
 }
 float c=(float)tong/(float)x;
 printf("\n%f",c);
 
}
main (){
	printf("nhap kich thuoc ma tran");
	scanf("%d%d",&m,&n);
	nhapmatran(a,m,n);
	xuatmatran(a,m,n);
	tinhtrungbinhcong(a,m,n);
	tbc(a,m,n);
}
