#include<stdio.h>
int main(){
	int a,b;
	printf("nhap 2 so a va b");
	scanf("%d%d",&a,&b);
	int max,min;
	max=(a>b)?a:b;
	min=(a<b)?a:b;

	printf("gia tri lon nhat la %d",max);
	printf("gia tri be nhat la %d",min);
	
}
