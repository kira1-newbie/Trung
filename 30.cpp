#include <stdio.h>
#include <math.h>
int songaytrongthang(int thang,int nam){
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
	    case 10:
		case 12:  
		return 31;
		case 4:
		case 6:
		case 9:
		case 11: 
		 return 30;
		case 2:  
		return  ((nam%400==0) || ((nam%4==0) &&(nam%100!=0)))?29:28;
		default: return -1; 	
		}
	}
	// tinh ngay thu bao nhieu trong nam 
int ngaytrongnam(int ngay,int thang,int nam){
    int ntn;
	for(int i=0;i<=thang;i++){
	ntn+=songaytrongthang(thang,nam);
}	
   ntn+=ngay;
   return ntn;}
void ngaytruoc(int ngay,int thang, int nam){
	if (ngay==1) {
		if (thang==1)
		 {ngay=31;
			thang=12;
			nam--;
	} else {thang--;ngay=songaytrongthang(thang,nam);}}
	else{ ngay--;	}
	printf("\nngaytruocdo %d/%d/%d",ngay,thang,nam);

}
void ngayketiep(int ngay,int thang, int nam){
	int nct=songaytrongthang(thang,nam);
	if (ngay==nct) {if (thang==12) { thang=1; ngay=1; nam++;} else { ngay=1; thang++;}}
	printf("\nngayketiep %d/%d/%d",ngay,thang,nam);

}
int main (){
	int ngay,thang,nam;
	do
  {
	  printf("nhap ngay thang nam: ");
	scanf("%d%d%d",&ngay,&thang,&nam);
} while((ngay>32) || (thang>13) || (nam<1)||(ngay<1)||thang<1||ngay>songaytrongthang(thang,nam));
// tim ra so ngay trong thang
printf("\nso ngay trong thang %d",songaytrongthang(thang,nam));
printf("\nngay thu trong nam %d",ngaytrongnam(ngay,thang,nam));
ngaytruoc(ngay,thang,nam);
ngayketiep(ngay,thang,nam);
}
