#include <stdio.h>
/* fibonanci
f(0)=1
f(1)=1
f(n)=f(n-1)+f(n-2) xuat gia tri cua f(n)*/
int  fibo(int x){
	if (x==0) return 0; else
	if (x==1 || x==2) return 1; else 
	return fibo(x-1)+fibo(x-2);

}

main (){
 int n;
 Nhap:
 	printf("nhap n:");
 	scanf("%d",&n);
 	if (n<0) goto Nhap;
 	fibo(n);
 	printf("xuat gia tri cua f(n)=%d",fibo(n));
}
