#include<stdio.h>
int a[100];
int n;
void nhapmang(int a[100],int &n){
	printf("nhap n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	} 
	}
	void xuatmangnguoc(int a[100],int&n)
	{
		for(int i=n-1;i>=0;i--){
			printf(" %d",a[i]);
		}
	}
	void daomangnguoc(int a[100],int n)
	{
	 for (int i=0;i<(n/2);i++)
	 {
	 	 int tam=a[i];
	 	 a[i]=a[n-i-1];
	 	 a[n-i-1]=tam;}	
	 	 for (int i=0;i<n;i++)
	 	 {
	 	 	printf(" %d",a[i]);
		  }
	}
	void xuatmang(int a[100],int&n){
		for(int i=0;i<n;i++)
		{
			printf(" %d",a[i]);
		}
	}
	int main(){
		nhapmang(a,n);
		printf("mang nguoc");
		xuatmangnguoc(a,n);
		printf("mang ban dau");
		xuatmang(a,n);
		printf("dao nguoc mang");
		daomangnguoc(a,n);
	}
	

	

