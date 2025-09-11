#include <stdio.h>
int main (){
	int n,i;
	Nhap:
	 printf("\nnhap n");
	 scanf("%d", &n);
	if(n<=0) goto Nhap;
	for(i=1;i<=n;i++) { if (i%2==0) continue ; printf("\n%d",i);
	} 
	
}
