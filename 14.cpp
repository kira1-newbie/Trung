#include <stdio.h>
int main (){
	float a,b;
	printf("nhap so a va b");
	scanf("%f%f",&a,&b);
	if (a!=0) { float x;
	x=-b/a; printf("nghiem cua phuong trinh la %f",x);
	} else if (b==0) {printf("phuong trinh co vo so nghiem");
	} else {printf("phuong trinh vo nghiem");
	}

}
