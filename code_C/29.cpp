#include <stdio.h>
#include <math.h>
 int ktra_sochinhphuong(int(x)){
 	int kc=sqrt(x);
 	if (pow(kc,2)==x) return 1; else return 0;

 }
int main (){
	int n;
	do {
	printf("nhap n");
	scanf("%d",&n);} while (n<=1);
	
	for (int i=2;i<=n;i++) { if (ktra_sochinhphuong(i)) {printf("\n%d",i);	}	}
	
}
