#include<stdio.h>
#include<math.h>
void nhap_mang(int a[],int &n)
{
	printf("Nhap n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
       scanf("%d",&a[i]);
}
void xuat_mang(int a[],int n)
{
	for(int i=1;i<=n;i++)
	  printf("%d ",a[i]);
}
void xoa(int a[],int &n,int vt)
{
	for(int i=vt;i<=n;i++)
	 a[i]=a[i+1];
	n--;
}
void xoapt_chan(int a[],int &n)
{
	int k=n;
	int luu;
	int dem=0;
	for(int i=1;i<=k;i++)
	{ 
		if(i%2!=0) dem++;
		if(i%2==0)
		{
			int j=0;
			while(j<=dem) j++;
			xoa(a,n,j);
		}
	}
}
void xoapt_le(int a[],int &n)
{
	int k=n;
	int luu;
	int dem=0;
	for(int i=1;i<=k;i++)
	{ 
		if(i%2==0) dem++;
		if(i%2!=0)
		{
			int j=0;
			while(j<=dem) j++;
			xoa(a,n,j);
		}
	}
}
int max(int a[],int n)
{
	int max=a[1];
	for(int i=2;i<=n;i++)
	 if(a[i]>max)
	 {
	 	max=a[i];
	 }
	return max;
}
void xoamax(int a[],int &n)
{
	int x=max(a,n);
	for(int i=1;i<=n;i++)
	 {
	 if(a[1]==x) xoa(a,n,1);
	 if(a[i]==x) 
	{
	  	xoa(a,n,i);
	  	i=1;
	 }
}
}
void merge_tang(int a[],int l,int m,int r)
{
	int lengl=m-l+1;
	int lengr=r-m;
	int a_l[lengl];
	int a_r[lengr];
	for(int i=1;i<=lengl;i++)
	{
	   a_l[i]=a[i+l-1];
	}
	for(int i=1;i<=lengr;i++)
	{
		a_r[i]=a[i+m];
	}
	int i=1,j=1,k=l;
	while(i<=lengl&&j<=lengr)
	{
		if(a_l[i]<=a_r[j])
		{
			a[k]=a_l[i];
			i++;
	    }
	    else
	    {
	    	a[k]=a_r[j];
	    	j++;
		}
		k++;
	}
	while(i<=lengl)
	{
		a[k]=a_l[i];
		k++;
		i++;
	}
	while(j<=lengr)
	{
		a[k]=a_r[j];
		k++;
		j++;
}

}
void sxep_tang(int a[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		sxep_tang(a,l,m);
		sxep_tang(a,m+1,r);
		merge_tang(a,l,m,r);
	}
}
void merge_giam(int a[],int l,int m,int r)
{

	int lengl=m-l+1;
	int lengr=r-m;
	int a_l[lengl];
	int a_r[lengr];
	for(int i=1;i<=lengl;i++)
	{
	   a_l[i]=a[i+l-1];
	}
	for(int i=1;i<=lengr;i++)
	{
		a_r[i]=a[i+m];
	}
	int i=1,j=1,k=l;
	while(i<=lengl&&j<=lengr)
	{
		if(a_l[i]>=a_r[j])
		{
			a[k]=a_l[i];
			i++;
	    }
	    else
	    {
	    	a[k]=a_r[j];
	    	j++;
		}
		k++;
	}
	while(i<=lengl)
	{
		a[k]=a_l[i];
		k++;
		i++;
	}
	while(j<=lengr)
	{
		a[k]=a_r[j];
		k++;
		j++;
}
}
void sxep_giam(int a[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		sxep_giam(a,l,m);
		sxep_giam(a,m+1,r);
		merge_giam(a,l,m,r);
	}
}
void sxep_chan(int a[],int &n)
{
	xoapt_le(a,n);
	sxep_tang(a,1,n);
}
int nt(int a)
{
	if(a==1) return 0;
	for(int i=2;i<=sqrt(a);i++)
	 if(a%i==0) return 0;
	return 1;
}
void tach_nt(int a[],int b[],int n,int &x)
{
	int j=1;
	x=0;
	for(int i=1;i<=n;i++)
	  if(nt(a[i])==1)
	  {
	  	b[j]=a[i];
	  	j++;
	  	x++;
	  }
}
main()
{
	int n;
    int a[100],b[100];
    int k;
    int x;
    nhap_mang(a,n);
    xuat_mang(a,n);
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
    printf("\nNhap k(1-7)");
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
		default: printf("Nhap sai!"); break;
	}
}while(k!=0);
}
