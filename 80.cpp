#include<stdio.h>
struct date{
	int day;
	int month;
	int year;
};
void inputdate(struct date &d)
{
   printf("nhap ngay sinh");
   scanf("%d",&d.day);
   printf("nhap thang sinh");
   scanf("%d",&d.month);
   printf("nhap nam sinh");
   scanf("%d",&d.year);
}
void outputdate(struct date d)
{
	printf("%d %d %d",d.day,d.month ,d.year);
}
int checkdate(struct date d){
	if ((d.day<0)||(d.day>32)||(d.month<0)||(d.month>12)||(d.year<0)) {return 0;}else
	if (d.month==1||d.month==3||d.month==5||d.month==7||d.month==8||d.month==10||d.month==12) 
	{if (d.day>32) return 0;} else
	if (d.month==2)
	{
		if((d.year%4==0&&d.year%100!=0)||d.year%400!=0)
		{
			if(d.day>29)
			return 0;
		}
		else if(d.day>28) return 0;
	}
	else if(d.day>30) return 0;
	
	return 1;
}
int main (){
	struct date mydate;
	inputdate(mydate);
	outputdate(mydate);
	printf("Kiem tra ngay hop le: %s", checkdate(mydate)==1?"hop le":"khong hop le");
}
