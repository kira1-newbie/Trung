#include<stdio.h>
void nhap(int a[],int &n)
{
	printf("Nhap n ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	 scanf("%d",&a[i]);
}
void xuat(int a[],int n)
{
	for(int i=1;i<=n;i++)
	printf("%d ",a[i]);
} 
void tron(int a[],int &n,int b[],int n1,int c[],int n2)
{
	n=0;
	int i,j;
	i=1; j=1;
	while(i<=n1&&j<=n2)
	{
	 if(b[i]<c[j])
	 {
		n++;
		a[n]=b[i];
		i++; 	
	}	
	else 
	{
	if(c[j]<b[i])
	{
		n++;
		a[n]=c[j];
		j++;
	}
	else 
	 i++;
	}
	}
	while(i<=n1)
	{
		if(b[i]>a[n])
		{
			n++;
			a[n]=b[i];
			i++;
		}
		else i++;
	}
		while(j<=n2)
	{
		if(c[j]>a[n])
		{
			n++;
			a[n]=c[j];
			j++;
		}
		else j++;
	}
}
int main()
{
	int c[100],n2;
	int a[100],n,b[100],n1;
	nhap(a,n);
	nhap(b,n1);
	tron(c,n2,a,n,b,n1);
	xuat(c,n2);
}
//abc!@#

