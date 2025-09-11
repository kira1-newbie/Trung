#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	printf("nhap a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	printf("\n ceil a %f",ceil(a));
	printf("\n floor a %f",floor(a));
	printf("\n sqrt a %f",sqrt(a));
	printf("\n pow a b%f",pow(a,b));
	printf("\n abs a %d",abs(a));
	printf("\n cbrt a %f",cbrt(a));
	printf("\n fabs a %f",fabs(a)); 
	printf("\n fmod a %f",fmod(a,b));
	printf("\n fma a b c %f ",fma(a,b,c));
	printf("\n round a %f",round(a));
	printf("\n fdim a b %f",fdim(a,b));
	printf("\n hypot a b %f",hypot(a,b));
    printf("\n exp a %f",exp(a)); 
	// e^a
} 
