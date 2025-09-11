// liet ke nhung phan tu thoa man dieu kien cua mang 1 chieu 
#include <stdio.h>
#include <math.h>
int lietke_snt(int x){
    for (int i=2;i<x;i++){
    	return (x%i==0);
	}
}
int  lietke(int x){
	
  
	return (x%3==0 && x%2==0 ); 
}
main(){
int a[200];
int n;
Nhap:
	{ printf("nhap n:");
	  scanf("%d",&n);
	} if (n<0 || n>200);
	for(int i=1;i<n;i++)
	{
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
	}
for (int i=1;i<n;i++){
 if (lietke(a[i]))	{
 printf("\n%d",a[i]);}
 if (lietke_snt(a[i])) {
 	printf("\n snt a[%d]:%d",i,a[i]);
 }
}
}
