#include <stdio.h>
#include <math.h>
int main (){
	int a,b,c;
	printf("nhap a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	float z=pow(b,2)-4*a*c;if (a==0){ printf("he so a phai khac 0");
	}
	 else if (z>0){ float x1,x2; x1=(-b+sqrt(z))/(2*a); x2=(-b-sqrt(z))/(2*a);
	printf("\nphuong trinh co 2 nghiem la %f va %f",x1,x2);
	} else if (z=0){ float x3; x3=-b/(2*a); printf("\nphuong trinh co 1 nghiem la %f",x3);
	} else { printf("phuong trinh vo nghiem");
	}
}
