// so sanh 2 chuoi bang strcmp(compare string)
#include <stdio.h>
#include <string.h>
int so_sanh (char a[],char b[])
{
	int kq,i=0;
	size_t len1=strlen(a);
	size_t len2=strlen(b);
	while (a[i]=b[i]&&(i<=len1)&&(i<=len2))
	{
		i++;
		kq=0;
	}
	int dolon=a[i]-b[i];
	if (dolon>0) kq=1; else kq=-1;
	return kq;
	
}
main (){
	char a[100]="TReeN";
	char b[100]="trn";
printf("%d",so_sanh(a,b));
// so duong s1>s2 (1)
// 0 s1=s2
// so am s1<s2 (-1)
	
}

