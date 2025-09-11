#include <stdio.h>
void hoanvi1(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void hoanvi2(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void hoanvi3(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
main(){
 int a=5, b=7;
 hoanvi1(a,b); // truyen tham chieu
 printf("1 %d %d",a,b);
 hoanvi2(a,b); // truyen tham tri
 printf("\n2 %d %d",a,b);
 hoanvi3(&a,&b); // con tro
 printf("\n3 %d %d",a,b);
}
