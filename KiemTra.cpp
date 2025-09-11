#include<stdio.h>
void Nhap(int a[],int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&a[i]);
	}
}
void In(int a[],int n)
{
	int i;
	printf("Mang hien tai: ");
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
}
void Chen(int a[],int *n)
{
	int i,x,max,vtmax;
	max=a[1];
	vtmax=1;
	printf("Nhap so can chen: ");
	scanf("%d",&x);
	for(i=2;i<=*n;i++)
		if(a[i]>max)
		{
			max=a[i];
			vtmax=i;
		}
	for(i=*n;i>=vtmax+1;i--)
		a[i+1]=a[i];
	a[i+1]=x;
	*n=*n+1;		
}
void Xoa_Bat_Ky(int a[],int *n)
{
	int i,x;
	printf("Nhap vi tri xoa: ");
	scanf("%d",&x);
	for(i=x;i<=*n;i++)
		a[i]=a[i+1];
	*n=*n-1;	
}
void Xoa_Lon_Nhat(int a[],int *n)
{
	int i,j,max;
	max=a[1];
	for(i=2;i<=*n;i++)
		if(max<a[i])
			max=a[i];
	j=1;
	for(i=1;i<=*n;i++)
		if(a[i]!=max)
		{
			a[j]=a[i];
			j=j+1;
		}
	*n=j-1;			
}
void Xoa_Nho_Nhat(int a[],int *n)
{
	int i,j,min;
	min=a[1];
	for(i=2;i<=*n;i++)
		if(min>a[i])
			min=a[i];
	j=1;
	for(i=1;i<=*n;i++)
		if(a[i]!=min)
		{
			a[j]=a[i];
			j=j+1;
		}
	*n=j-1;
}
void Menu()
{
	int *ds,spt,lc;
	printf("Nhap vao so phan tu: ");
	scanf("%d",&spt);
	ds=new int[spt+1];
	Nhap(ds,spt);
	do
	{
		printf("\n------Menu------\n");
		printf("1.Chen phan tu x vao sau phan tu max.\n");
		printf("2.Xoa phan tu x vao vi tri bat ky.\n");
		printf("3.Xoa phan tu lon nhat trong mang.\n");
		printf("4.Xoa phan tu nho nhat trong mang.\n");
		printf("0.Thoat.");
		printf("\nNhap lua chon: ");
		scanf("%d",&lc);
		switch(lc)
		{
			case 1:
				Chen(ds,&spt);		
				break;		
			case 2:
				Xoa_Bat_Ky(ds,&spt);
				break;
			case 3:
				Xoa_Lon_Nhat(ds,&spt);
				break;
			case 4:
				Xoa_Nho_Nhat(ds,&spt);
				break;
			case 0:
				printf("Thoat chuong trinh\n");
				break;	
			default:
				printf("Lua chon sai.Nhap lai!");	
		}	
		In(ds,spt);
	}
	while(lc!=0);
}
main()
{
	Menu();
}
