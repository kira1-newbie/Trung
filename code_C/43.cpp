// tim phan tu lon t2 hoac nho t2 trong mang 
#include <stdio.h>
int a[100];
int n;
void nhapmang(int a[100],int &n){
	do{
		printf("nhap n");
		scanf("%d",&n);
	} while (n<0 ||n>100);
	for(int i=0;i<n;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[100],int n){
	for (int i=0;i<n;i++){
		printf(" %d",a[i]); 
	}
}
int max2(int a[],int n){
	int max=a[0];int j=0;
	for (int i=1;i<n;i++) { if (max<a[i]) { max=a[i]; j=i;} } a[j]=a[n-1]; a[n-1]=max;
	int m2=a[0];
	for (int i=1;i<(n-1);i++) {if (m2<a[i]) { m2=a[i];}} 

	return m2;
	}
	
int min2(int a[100],int n){
	int min=a[0];int j=0;
	for (int i=0;i<n;i++) {if (min>a[i]) {min=a[i];j=i;}} a[j]=a[n-1]; a[n-1]=min;
	int minn2=a[0];
	for (int i=1;i<(n-1);i++) { if (minn2>a[i]) {minn2=a[i];}}
	
	return minn2;
}
main(){
	nhapmang(a,n);
	xuatmang(a,n);
	printf("\n%d",max2(a,n));
	printf("\n%d",min2(a,n));
}
