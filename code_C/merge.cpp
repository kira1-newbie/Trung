#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void merge(int a[],int l, int m, int r)
{
    int a_l[m-l+1];
    int a_r[r-m];
    int leng_r=r-m;
    int leng_l=m-l+1;	
    for(int i=0;i<leng_r;i++)
      a_r[i]=a[i+m+1];
    for(int i=0;i<leng_l;i++)
      a_l[i]=a[i+l];
    int i=0,j=0,k=l;
    while(i<leng_r&&j<leng_l)
    {
        if(a_l[j]<a_r[i])
        {
            a[k]=a_l[j];
            j++;
            k++;
        }
        else
        {
            a[k]=a_r[i];
            i++;
            k++;
        }
    }
    while(i<leng_r)
    {
        a[k]=a_r[i];
        k++;
        i++;
    }
    while(j<leng_l)
    {
        a[k]=a_l[j];
        k++;
        j++;
    }
}
void mergesort(int a[],int l, int r)
{
    if(l<r)
    {
        int m;
        m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main()
{
    srand((int)time(0));
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++)
      a[i]=rand()%20;
    for(int i=0;i<n;i++)
       printf("%d ",a[i]);
    mergesort(a,0,n-1);
    printf("\n");
    for(int j=0;j<n;j++)
     printf("%d ",a[j]);
}
