// tinh do dai cua chuoi
#include<stdio.h>
#include<string.h>
int strlen1(char ten[])
{
	int n=0;
	while (ten[n]!=NULL){
		n++;
	}
	return n;
}
main ()
{
	char ten[1000];
	fgets(ten,sizeof(ten),stdin); 
	printf("do dai cua chuoi la %d",strlen1(ten));
}
