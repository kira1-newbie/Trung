#include<stdio.h>
#include<math.h>
void nhap(int a[],int &n)
{
	printf("nhap so phan tu: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("Phan tu %d: ",i);
		scanf("%d",&a[i]);
	}
}
void xuat(int a[],int n)
{
	printf("danh sach phan tu: ");
	for(int i=1;i<=n;i++)
	 printf("%d ",a[i]);
}
int tk(int a[],int n,int x)
{
	for(int i=1;i<=n;i++)
	{
		if(a[i]==x) return 1;
	}
	return 0;
}
void sxep(int a[],int n)
{
	for(int i=1;i<n;i++)
		for(int j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
}
int tk_dq(int a[],int l, int r,int k)
{
	if(l<r)
	{
		int m=(l+r)/2;
		if(a[m]>k)
			return tk_dq(a,l,m-1,k);
		else
			if(a[m]<k)
			return tk_dq(a,m+1,r,k);
			else 
			return 1;
	}
	else return 0;
}
int max(int a[],int n)
{
	int m=a[1];
	for(int i=2;i<=n;i++)
		{
			if(m<a[i])
			{
				m=a[i];
			}
		}
	return m;
}
int min(int a[],int n)
{
	int m=a[1];
	for(int i=2;i<=n;i++)
		{
			if(m>a[i])
			{
				m=a[i];
			}
		}
	return m;
}
int snt(int n)
{	
	if(n==1||n==0) return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return 0;
	return 1;
}
void in_snt(int a[],int n)
{
	int d=0;
	int b[100];
	int j=0;
	for(int i=1;i<=n;i++)
	 if(snt(a[i])==1)
	 	{
	 		if(j==0)
	 		{
				j++;
				b[j]=a[i];	
			}
			else
			{
				if(tk(b,j,a[i])==0)
				{
					j++;
					b[j]=a[i];
				}	
			}
			d++;
		}
	printf("\nso nguyen to co trong mang la %d",d);
	printf("\nDanh sach so nguyen to: ");
	if(b==0) printf("\nrong");
	for(int k=1;k<=j;k++)
		printf("%d ",b[k]);
}
int timkiem_cap(int b[],int n1,int c[],int x,int y)
{
	for(int i=1;i<=n1;i++)
		if((b[i]==x&&c[i]==y)||(b[i]==y&&c[i]==x))
			return 1;
	return 0;	
}
int capso(int a[],int n,int &s)
{
	int d=0;
	int b[100];
	int c[100];
	int n1=0;
	printf("Nhap so nguyen S: ");
	scanf("%d",&s);
	int x,y;
	printf("cac cap so la: ");
	for(int i=1;i<n;i++)
		for(int j=i+1;j<=n;j++)
		{
			x=a[i];
			y=a[j];
			if(x+y==s||abs(x-y)==s)
				{
					d++;
					if(n1==0)
					{
						n1++;
						b[n1]=x;
						c[n1]=y;
					}
					else
					{
						if(timkiem_cap(b,n1,c,x,y)==0)
						{
							n1++;
							b[n1]=x;
							c[n1]=y;
						}
					}
				}
		}
	for(int i=1;i<=n1;i++)
	{
		printf("\n%d %d",b[i],c[i]);
	}
	if(n1==0) printf("Khong co cap so nao");
	return d;
}
main()
{
		int a[100];
	int n;
	nhap(a,n);
	xuat(a,n);
	printf("\nPhan tu lon nhat trong mang: %d",max(a,n));
	printf("\nPhan tu nho nhat trong mang: %d",min(a,n));	
	in_snt(a,n);
	printf("\n");
	int s;
	printf("\nso cap trong mang: %d",capso(a,n,s));
}
