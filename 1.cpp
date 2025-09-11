#include<stdio.h>
void nhap(int a[],int &n)
{
    printf("Nhap n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Phan tu thu %d: ",i);
        scanf("%d",&a[i]);
    }
}
void hoanvi(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void bubble(int a[],int n)
{
    for(int i=1;i<n;i++)
        for(int j=n;j>=i;j--)
        if(a[j]<a[j--])
        {
            hoanvi(a[j],a[j--]);
        }
}
void xuat(int a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}
main()
{
    int a[100];
    int n;
   nhap(a,n);
   xuat(a,n);
   printf("\nSap xep tang dan: ");
   bubble(a,n);
   xuat(a,n); 
}
