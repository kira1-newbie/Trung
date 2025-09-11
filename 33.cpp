#include <stdio.h>
// chuyen tu he thap phan sang he nhi phan
void chuyendoi(int x){
	if (x==0) return ;
	else {int r=x%2;
	 chuyendoi(x/2);	
	 printf("%d",r);}
		}
main(){
	int n;
	do{
	printf("nhap n:");
	scanf("%d",&n);} while (n<=0);
chuyendoi(n);
	 
}
