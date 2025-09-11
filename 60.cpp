// ma tran vuong ktra mang doi xung qua (duong cheo chinh)(duong cheo phu)
#include<stdio.h>
int a[100][100];
int m;
int nhapmatranvuong(int a[100][100],int &m){
	printf("nhap cap cua ma tran vuong ");
	scanf("%d",&m);
	for (int i=0;i<m;i++){
		for (int j=0;j<m;j++){
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
int xuatmatran(int a[100][100],int m){
	for (int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int doixungquaduongcheochinh(int a[100][100],int m){
	for (int i=0;i<m;i++){
		for (int j=0;j<m;j++){
			if (a[i][j]!=a[j][i]){
				return 0;
			}
		}
	}
	return 1;

}
int doixungquaduongcheophu(int a[100][100],int m){
	for (int i=0;i<m/2;i++){
		for (int j=0;j<m/2;j++){
			
				if ((a[i][j]!=a[m-i-1][m-j-1])){
					return 	0;
				} 
				
		
			}
		}
return 1;
	}
	

main (){
	nhapmatranvuong(a,m);
	xuatmatran(a,m);
		printf(" %s",doixungquaduongcheochinh(a,m)==1?"doi xung qua duong cheo chinh":"khong doi xung qua duong cheo chinh");
	printf(" %s",doixungquaduongcheophu(a,m)==1?"doi xung qua duong cheo phu":"khong doi xung qua duong cheo phu");
}
