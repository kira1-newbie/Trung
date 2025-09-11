// tim chuoi con trong chuoi (a substring with main string) strstr
#include<stdio.h>
#include<string.h>
void *ktr_chuoicon(char a[],char b[])
{
	size_t len= strlen(b);
	for(int i=0;i<len;i++)
	{
		
	}
}
void xoaxuongdong(char a[])
{
	size_t len=strlen(a);
	if (a[len-1]!=NULL) a[len-1]=NULL;
}
main()
{
	char a[50];
	char c[50];
	printf("nhap chuoi a");
	fgets(a,sizeof(a),stdin);
	xoaxuongdong(a);
	printf("nhap chuoi c ");
	fgets(c,sizeof(c),stdin);
	xoaxuongdong(c);
	char *b=strstr(a,c);
	if (b!=NULL)
    printf("tim thay chuoi con");	
	else 
	printf("khong tim thay chuoi con");
}
