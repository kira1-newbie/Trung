#include <stdio.h>
#include <conio.h>
int a[100][100];
int m,n;
int nhapmatran(int a[100][100],int &m,int &n)
{
	 for(int i=0;i<m;i++){
 	for (int j=0;j<n;j++)
 	{
 		printf("a[%d][%d]",i,j);
	    scanf("%d",&a[i][j]); }   
 }	
}

int xuatmatran(int a[100][100],int m,int n){
	 for(int i=0;i<m;i++){
 	for (int j=0;j<n;j++)
 	{
 		printf("\n %d ",a[i][j]);
 	
	 }
 }
}
// bien mang 2 chieu thanh 1 chieu r sap xep:))))
void matrantangdan(int a[100][100],int m,int n){
/*	int k=0;
		for (int i=0;i<m;i++){
		for (int j=0;j<n;j++)	
		{
	b[k]=a[i][j];
 	k=k+1;
 	
	 }
	
}
int temp;
for(int i=0;i<k;i++) {
	for(int j=k-1;j>i;j--) {
	
	
	if (b[i]>b[j]){
		temp=b[i];
		b[i]=b[j];
		b[j]=temp;
	}
}
}
int c=0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++)	
		{
			
		a[i][j]=b[c];
		c++;
		}
	}
for (int i=0;i<m;i++){
	for (int j=0;j<n;j++){
printf(" %d ",a[i][j]);}
}
printf("-------");*/
int k=m*n;
int temp;
for (int i=0;i<k-1;i++){
	for(int j=i+1;j<k;j++){
		if (a[i/n][i%n]>a[j/n][j%n]){
		temp=a[i/n][i%n];
		a[i/n][i%n]=a[j/n][j%n];
		a[j/n][j%n]=temp;
		}
	}
}

} 
void matrangiamdan(int a[100][100],int m,int n)
{
	/* int k=0;
		for (int i=0;i<m;i++){
		for (int j=0;j<n;j++)	
		{
	b[k]=a[i][j];
 	k=k+1;
 	 }
}
int temp;
for(int i=0;i<k;i++) {
	for(int j=k-1;j>i;j--) {
	
	
	if (b[i]<b[j]){
		temp=b[i];
		b[i]=b[j];
		b[j]=temp;
	}
}
}
int c=0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++)	
		{
		a[i][j]=b[c];
		c++;
		}
	}
for (int i=0;i<m;i++){
	for (int j=0;j<n;j++){
printf(" %d ",a[i][j]);	}
}
printf("-------"); */
int k=m*n;
int temp;
for (int i=0;i<k-1;i++){
	for (int j=i+1;j<k;j++){
		if (a[i/n][i%n]<a[j/n][j%n]){
			temp=a[i/n][i%n];
			a[i/n][i%n]=a[j/n][j%n];
			a[j/n][j%n]=temp;
	}
	}
}
} 
main(){
	printf("nhap kich thuoc ma tran");
	scanf("%d%d",&m,&n);
	nhapmatran(a,m,n);
	xuatmatran(a,m,n);
	printf("-------------");
	matrantangdan(a,m,n);
		xuatmatran(a,m,n);
		printf("-----------------");
    matrangiamdan(a,m,n); 
    xuatmatran(a,m,n);
    getch();
	}
