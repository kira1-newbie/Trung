#include<stdio.h>
#include<math.h>
int daonguocso(int n)
{
	int s=n,d=0;
	if(n<10) return n;
	else
	{
		while(s!=0)
		{
			s=s/10;
			d++;
		}
		return (n%10)*pow(10,d-1)+daonguocso(n/10);
	}
}
int main()
{
	int x=94592349;
	printf("dao nguoc so %d thanh %d",x,daonguocso(x));
}
