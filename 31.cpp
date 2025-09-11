#include <stdio.h>
// truyen tham tri
void truyen_thamtri(int a, int b)
{
	int c=a;
	a=b;
	b=c;
}
//truyen tham chieu
void truyen_thamchieu(int &a, int &b)
{
	int c=a;
	a=b;
	b=c;
}
//// luu y: neu dung truyen tham chieu trc roi moi dung truyen tham tri--> truyen tham chieu
main() {
	int a,b;
	printf("nhap a va b:");
	scanf("%d%d",&a,&b);
 
    truyen_thamchieu(a,b); 
    printf("\na va b: %d %d",a,b);
    truyen_thamtri(a,b);	
       printf("\na va b: %d %d",a,b);
}
