#include<stdio.h>
void hoanvi(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int quick(int a[],int l,int r)
{
    int d=0;
    int pivot=a[l];
    for(int i=l+1;i<=r;i++)
     if(a[i]<=pivot) d++;
    int index_pivot=d+l;
    hoanvi(a[index_pivot],a[l]);
    int i=l;
    int j=r;
    while(i<index_pivot&&j>index_pivot)
    {
        while(a[i]<=pivot) i++;
        while(a[j]>pivot) j--;
        if(i<index_pivot&&j>index_pivot) hoanvi(a[i],a[j]);
    }
    return index_pivot;
}
void quicksort(int a[],int l,int r)
{
    if(l>=r) return;
    int x=quick(a,l,r);
    quicksort(a,l,x-1);
    quicksort(a,x+1,r);
}
int main()
{
    int a[100];
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
     scanf("%d",&a[i]);
     for(int i=1;i<=n;i++)
     printf("%d ",a[i]);
     printf("\n");
     quicksort(a,1,n);
     for(int i=1;i<=n;i++)
     printf("%d ",a[i]);
}