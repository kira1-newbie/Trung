#include<stdio.h>
int tangdan(int a[],int n)
{
	int i,j;
	for(i=1;i<n;i++)
	 for(j=i+1;j<=n;j++)
	  if(a[i]>=a[j]) return 0;
	  return 1;
}
int giamdan(int a[],int n)
{
	int i,j;
	for(i=1;i<n;i++)
	 for(j=i+1;j<=n;j++)
	  if(a[i]<=a[j]) return 0;
	  return 1;	
}
int ktra(int a[],int n)
{
	if(tangdan(a,n)==1) return 1;
	else if(giamdan(a,n)==1) return 0;
	     else return -1;
}
void nhap(int a[],int &n)
{
	int i;
	printf("Nhap n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 scanf("%d",&a[i]);
}
void xuat(int a[],int n)
{
	int i;
	for(i=1;i<=n;i++)
	 printf("%d ",a[i]);
}
main()
{
	int a[100];
	int n;
	nhap(a,n);
	xuat(a,n);
	printf("\n");
	if(ktra(a,n)==1) printf("tang dan");
	else if(ktra(a,n)==0) printf("giam dan");
	else printf("khong tang khong giam");
}
