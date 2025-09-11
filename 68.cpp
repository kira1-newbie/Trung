#include<stdio.h>
main()
{
  int tuoi;
  char ho_va_ten[50];
  printf("nhap tuoi cua ban");
  scanf("%d",&tuoi);
  getchar();
  printf("\nnhap ho va ten cua ban");
  fgets(ho_va_ten,sizeof(ho_va_ten),stdin);
  printf("\ntuoi cua ban la: %d",tuoi);
  printf("\nho va ten la %s",ho_va_ten);
}
