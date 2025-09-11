#include <stdio.h>
int main()
{
 int x[10];
 int n=10;
 for (int i=0;i<n;i++){
 	printf("a[%d]",i);
 	scanf("%d",x+i); // dung con tro de nhap gia tri	
 }
 int *pc=&x[0]; // gan con tro cho gia tri dau tien cua mang
 for (int i=0;i<n;i++){

 //	printf("\n%d",x[i]);
    printf("\n %d",*(x+i)); // dung con tro de xuat gia tri
 // printf("\n %d,pc[i]); xuat gia tri bang con tro 
 printf("\n %p",pc);
 }
}
