#include"stdio.h"
#include"math.h"
// in ra so ngay trong thang nam do 
int main(){
	int nam,thang;
	printf("nhap thang,nam");
	scanf("%d%d",&thang,&nam);
	switch(thang){
		case 1:
	    printf("so ngay la 31 ");
	    break;
	    case 2:
	    if (nam%400==0) {
		printf("so ngay la 29"); 
	} else if ((nam%4==0) && (nam%100!=0)) {printf("so ngay la 29");} else 
	{printf("so ngay la 28 ");}

	break;
	    case 3:
	    printf("so ngay la 31");
	    break;
	    case 4:
	    printf("so ngay la 30 ");
	    break;
	    case 5:
	    printf("so ngay la 31 ");
	    break;
	    case 6:
	    printf("so ngay la 30");
	    break;
	    case 7:
	    printf("so ngay la 31");
	    break;
	    case 8:
	    printf("so ngay la 31 ");
	    break;
	    case 9:
	    printf("so ngay la 30");
	    break;
	    case 10:
	    printf("so ngay la 31");
	    break;
	    case 11:
	    printf("so ngay la 30");
	    break;
	    case 12:
	    printf("so ngay la 31");
	    break;
	    default:
	    printf("nhap so thang khong dung");
	    break;
	    
	}

}
