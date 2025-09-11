#include <stdio.h>
int main (){
	int n,i=0;
	int tong=0;
	printf("nhap n");
	scanf("%d",&n);
	while (i<=n) {tong=i+tong; i++;// tang i thi ghi i++ 
	} printf("tong:%d",tong);
}
