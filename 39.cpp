#include <stdio.h>
int max(int x[],int n){
	int maxx=x[0];
	for (int i=1;i<n;i++) { 
		if (x[i]>maxx) { maxx=x[i];	}
	}
	return maxx;
	}
int min(int x[],int n){
	int minn=x[0];
	for (int i=1;i<n;i++) {
		if (x[i]<minn) { minn=x[i];
		}
	}
	return minn;
	}
main (){
	int a[100];
	int n;
	do 
	{
		printf("nhap n:");
		scanf("%d",&n);
	} while (n<0 ||n>100);
	for (int i=0;i<n;i++)
	{
		printf("\na[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("max la %d",max(a,n));
	printf("min la %d",min(a,n));
}
