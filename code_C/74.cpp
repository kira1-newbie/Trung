// strupr uppercase chuyen sang chu hoa
// strlwr lowercase chuyen sang chu thuong
#include <stdio.h>
#include <string.h>
//65--> 90 chu hoa 97 --> 122 chu thuong
char chuyen_doi (char a[]){
 size_t len=strlen(a);
 int gia_tri;
 char change;
 for (int i=0;i<len;i++){
 	gia_tri=a[i];
    if (gia_tri>=97&&gia_tri<=122)
    {
    	gia_tri=gia_tri-32;
    	a[i]=gia_tri;
    }
 }
}
char chuyen_doi1 (char a[]){
 size_t len=strlen(a);
 int gia_tri;
 char change;
 for (int i=0;i<len;i++){
 	  gia_tri=a[i];
    if (gia_tri>=65&&gia_tri<=90)
    {
    	gia_tri=gia_tri+32;
    	a[i]=gia_tri;
    }
 }
}
main()
{
	char a[100]="TruNg%1";
	printf("%s",a);
	chuyen_doi(a);
	printf("\n%s",a);
	chuyen_doi1(a);
	printf("\n%s",a);

}
