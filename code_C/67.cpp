#include<stdio.h>
main ()
{
	char ho_va_ten[100];
	printf("nhap ho va ten");
    fgets(ho_va_ten,sizeof(ho_va_ten),stdin);
    printf("ho va ten la");
    puts(ho_va_ten);

}
