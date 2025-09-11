// mang 1 chieu gom n hang mang 2 chieu gom hang va cot
// int a[x][y]; trong do x la so hang y la so cot 
#include <stdio.h> 
int a[100][100];
int m,n;
int t;
void nhapmatran (int x[100][100],int &m,int &n){
	Nhap:
{
	printf("nhap so hang va so cot:");
	scanf("%d%d",&m,&n);
	} if (m<0 || m>100 || n<0 ||m>100) goto Nhap;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++ ){
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
}
void xuatmatran (int x[100][100],int m,int n){
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			printf("a[%d][%d]=%d",i,j,a[i][j]);
		}
	}
}
void thuchientimkiem(int x[100][100],int m, int n,int &t){
	printf("nhap so can tim kiem");
	scanf("%d",&t);
	int kq=0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if (x[m][n]==t) { kq=1;}
		
			}
		};
		if (kq==1){ printf("co");} else { printf("khong");
		}
	}



main(){
	nhapmatran(a,m,n);
	xuatmatran(a,m,n);
	thuchientimkiem(a,m,n,t);
}

