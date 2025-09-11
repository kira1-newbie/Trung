#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void nhap(int a[],int &n)
{
	printf("Nhap n: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	 a[i]=rand()%2+1;
}
void xuat(int a[],int n)
{
	for(int i=1;i<=n;i++)
	 printf("%d ",a[i]);
	printf("\n");
}
void xoa(int a[],int &n,int &x)
{
	printf("nhap gia tri can xoa: ");
	scanf("%d",&x);
	int i=1;
	while(i<=n)
	{
		while(a[i]==x&&i<n)
		{
			for(int j=i;j<=n-1;j++)
				a[j]=a[j+1];
			n--;
		}
		if(a[i]==x&&i==n) n--; 
		i++;
	}
}
int main()
{
	srand((int)time(0));
	int *a;
	int x;
	int k;
	int n;
	a= new int [n+1];
   do
    {
    printf("\nMenu:");
    printf("\n1: Xoa phan tu chan trong mang: ");
printf("\n2: Xoa phan tu le trong mang: ");
printf("\n3: Xoa phan tu co gia tri max trong mang: ");
printf("\n4: Sap xep day tang dan trong mang: ");
printf("\n5: Sap xep day giam dan trong mang: ");
printf("\n6: Sap xep phan tu chan tang dan trong mang: ");
printf("\n7: Tach nguyen to co trong mang a vao mang b: ");
printf("\n8: Sap xep phan tu chan tang dan trong mang: ");
printf("\n9: Tach nguyen to co trong mang a vao mang b: ");
printf("\n10: Sap xep phan tu chan tang dan trong mang: ");
printf("\n11: Tach nguyen to co trong mang a vao mang b: ");
printf("\n12: Xoa phan tu chan trong mang: ");
printf("\n13: Xoa phan tu le trong mang: ");
printf("\n14: Xoa phan tu co gia tri max trong mang: ");
printf("\n15: Sap xep day tang dan trong mang: ");
printf("\n16: Sap xep day giam dan trong mang: ");
printf("\n17: Sap xep phan tu chan tang dan trong mang: ");
printf("\n18: Tach nguyen to co trong mang a vao mang b: ");
printf("\n0: Thoat menu!");
    printf("\nNhap k(0-18): ");
    scanf("%d",&k);
    switch(k)
    {
    	case 1: 
		{
		 xoapt_chan(a,n);
	     printf("Sau khi xoa phan tu chan\n");
	     xuat_mang(a,n);
	     break;
		}
    	case 2:
    	{
    	 xoapt_le(a,n);
    	 printf("Sau khi xoa phan tu le\n");
    	 xuat_mang(a,n);
    	 break;
		}
    	case 3:
        {
        	xoamax(a,n);
        	printf("Sau khi xoa phan tu co gia tri max\n");
        	xuat_mang(a,n);
        	break;
		}
    	case 4:
    	{
    	   	sxep_tang(a,1,n);
    	   	printf("Sau khi sap xep tang dan\n");
    	   	xuat_mang(a,n);
    	   	break;
		}
    	case 5:
    	{
    		sxep_giam(a,1,n);
    		printf("Sau khi sap xep giam dan\n");
    		xuat_mang(a,n);
    		break;
		}
		case 6:
		{
			sxep_chan(a,n);
			printf("Sau khi sap xep phan tu chan tang dan\n");
  			xuat_mang(a,n);
			break;			
		}
		case 7:
		{
			tach_nt(a,b,n,x);
			printf("mang sau khi da tach so nguyen to\n");
			xuat_mang(b,x);
			break;
		}
			case 1: 
		{
		 xoapt_chan(a,n);
	     printf("Sau khi xoa phan tu chan\n");
	     xuat_mang(a,n);
	     break;
		}
    	case 2:
    	{
    	 xoapt_le(a,n);
    	 printf("Sau khi xoa phan tu le\n");
    	 xuat_mang(a,n);
    	 break;
		}
    	case 3:
        {
        	xoamax(a,n);
        	printf("Sau khi xoa phan tu co gia tri max\n");
        	xuat_mang(a,n);
        	break;
		}
    	case 4:
    	{
    	   	sxep_tang(a,1,n);
    	   	printf("Sau khi sap xep tang dan\n");
    	   	xuat_mang(a,n);
    	   	break;
		}
    	case 5:
    	{
    		sxep_giam(a,1,n);
    		printf("Sau khi sap xep giam dan\n");
    		xuat_mang(a,n);
    		break;
		}
		case 6:
		{
			sxep_chan(a,n);
			printf("Sau khi sap xep phan tu chan tang dan\n");
  			xuat_mang(a,n);
			break;			
		}
		case 7:
		{
			tach_nt(a,b,n,x);
			printf("mang sau khi da tach so nguyen to\n");
			xuat_mang(b,x);
			break;
		}
			case 1: 
		{
		 xoapt_chan(a,n);
	     printf("Sau khi xoa phan tu chan\n");
	     xuat_mang(a,n);
	     break;
		}
    	case 2:
    	{
    	 xoapt_le(a,n);
    	 printf("Sau khi xoa phan tu le\n");
    	 xuat_mang(a,n);
    	 break;
		}
    	case 3:
        {
        	xoamax(a,n);
        	printf("Sau khi xoa phan tu co gia tri max\n");
        	xuat_mang(a,n);
        	break;
		}
    	case 4:
    	{
    	   	sxep_tang(a,1,n);
    	   	printf("Sau khi sap xep tang dan\n");
    	   	xuat_mang(a,n);
    	   	break;
		}
    	case 5:
    	{
    		sxep_giam(a,1,n);
    		printf("Sau khi sap xep giam dan\n");
    		xuat_mang(a,n);
    		break;
		}
		case 6:
		{
			sxep_chan(a,n);
			printf("Sau khi sap xep phan tu chan tang dan\n");
  			xuat_mang(a,n);
			break;			
		}
		case 7:
		{
			tach_nt(a,b,n,x);
			printf("mang sau khi da tach so nguyen to\n");
			xuat_mang(b,x);
			break;
		}
	}
}while(k!=0);
}
