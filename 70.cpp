// xoa ky tu xuong dong o cuoi chuoi
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
void xoa_ky_tu_xuong_dong(char ten[])
{
	size_t dodai=strlen(ten);
    ten[dodai-1]=NULL;
}
main ()
{
	char ten[1000];
	fgets(ten,sizeof(ten),stdin); 

	printf("do dai cua chuoi la %d",strlen1(ten));
}
