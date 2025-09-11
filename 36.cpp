// nhap va xuat mang 1 chieu. tinh tong cac phan tu trong mang.
#include<stdio.h>
main (){
	int a[100];
	int n;
	int tong=0;
	do{
		printf("nhap n:");
		scanf("%d",&n);
	} while  ((n<1) || (n>100));
	// nhap du lieu cho mang
	for (int i=0;i<n;i++){ printf("\na[%d]=",i);
	scanf("%d",&a[i]);
	}
	// xuat du lieu
    for (int i=0;i<n;i++)
    {printf("\na[%d]=%d",i,a[i]);}
    // tinh tong cua mang
    for (int i=0;i<n;i++)
    { tong+=a[i];}
	// tong=tong+a[i]; } 
    printf("\ntong=%d",tong);
}
