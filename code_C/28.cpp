// ktra tong so nguyen to truoc 1 so n bat ky
#include <stdio.h>
int snt(int(x)) {

if (x<=1) return 0;
for (int i=2;i<=x-1;i++) {
	if (x%i==0) return 0;
}
return 1;}
int main (){
	int n,tong=0;
	do{
	
    printf("nhap n");
    scanf("%d",&n);}
    while (n<=1);
 for(int i=2;i<=n;i++){ if (snt(i)){ tong=tong+i; 
 }
 }
printf("tong so nguyen to la %d",tong); 
}
