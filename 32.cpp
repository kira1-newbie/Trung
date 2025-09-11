#include <stdio.h>
// tinh giai thua bang ham de quy
int giaithua(int n){
	if (n==1 || n==0) return 1;
	else return n*giaithua(n-1);
}
main() {
	Nhap:
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	if (n<0) goto Nhap;
	printf("giai thua cua n la:%d",giaithua(n));
}
