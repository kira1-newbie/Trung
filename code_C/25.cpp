// bai toan tinh giai thua 
#include <stdio.h>
int main (){
    int n;
	long a=1,i,tich=1;
	printf("nhap n:");
	scanf("%d",&n); 
	
//	while (i<=n) {tich=tich*i; i++;} hoac
for (i=0;i<n;i++) { tich=tich*a; a++;}
	printf("giai thua la: %d",tich);
}
