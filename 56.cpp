#include<stdio.h>
#include<conio.h>
int a[100][100];
int b[200];
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
 		printf("\n %d",a[i][j]);
 	
	 }
 }
}
// chuyen doi mang 2 chieu thanh mang 1 chieu
int chuyendoi(int a[100][100],int b[200],int m,int n){
	int k=0;
	for(int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			b[k]=a[i][j];
			k=k+1;
		}
	}
	for (int i=0;i<k;i++){
		printf("\nb[%d]:%d",i,b[i]);
		
	}
	int temp;
for(int i=k;i>0;i--) {
	for(int j=0;j<i;j++)
	
	if (b[i]<b[j]){
		temp=b[i];
		b[i]=b[j];
		b[j]=temp;
	}
}

	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++)	
		{
			int c=0;
		a[i][j]=b[c];
		c++;
		}
}
for (int i=0;i<m;i++){
	for (int j=0;j<n;j++){
printf("%d ",a[i][j]);	
printf("-------");
}
}
}
main (){
	printf("kich thuoc ma tran ");scanf("%d%d",&m,&n);
	nhapmatran(a,m,n);
	xuatmatran(a,m,n);
	chuyendoi(a,b,m,n);
	
}
