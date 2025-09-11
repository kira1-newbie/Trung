#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand((int)time(0));
	char kt,b;
	int x;
		kt='A'; 
			x=rand()%25+1;
		 	kt=kt+x;	
	b=kt;
	printf("%c",b);
} 
