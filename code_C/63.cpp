#include <stdio.h>
int main(){
	int var;
	printf("nhap var =");
	scanf("%d",&var);
	printf("\n gia tri cua var: %d",var);
	printf("\n Dia chi cua bien var trong bo nho la: %p",&var);
	int *pc,c;
	c=5;
	pc=&c;
	printf("\n gia tri cua c la:%d",*pc);
	printf("\n dia chi cua bien c trong bo nho la: %p",pc);
	*pc=1;
	printf("\n gia tri cua c la:%d",*pc);
	printf("\n gia tri cua c la:%d",c);
	c=3;
	printf("\n gia tri cua c la:%d",*pc);
	printf("\n gia tri cua c la:%d",c); 
}
