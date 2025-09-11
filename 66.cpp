#include<stdio.h>
#include<stdlib.h>
 main()
{
	int n;
	printf("nhap so luong phan tu");
 	scanf("%d",&n);
 	int *ptr=(int*)malloc(n*sizeof(int));
 //	int *ptr=(int*)calloc(n,sizeof(int));
 	if (ptr==NULL)
	 {
 		printf("khong cap phat bo nho");
 		return 0;
 	 }  
	 for (int i=0;i<n;i++){
	 	printf("%d=",i);
	 	scanf("%d",ptr+i);
		} 
	int x;
	printf("so luong can them la");
	scanf("%d",&x);
	realloc(ptr,x); 
	
	 
	 for (int i=0;i<x;i++){
	 	printf("\n %d",*(ptr+i));
	 }
	 free(ptr);
 	
 	
}
