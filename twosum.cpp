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
void twosum(int a[],int n,int x,int &c,int &b)
{
    c=0;
    b=0;
    int s;
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
        {
            s=a[i]+a[j];
            if(s==x)
            {
                c=i;
                b=j;
                return;
            }
        }
}
void xuat(int a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[100],n;
    nhap(a,n);
    xuat(a,n);
    int b,c;
    printf("\nNhap target: ");
    int x;
    scanf("%d",&x);
    twosum(a,n,x,b,c);
    printf("%d,%d",b,c);
}