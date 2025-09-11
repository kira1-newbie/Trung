#include <stdio.h>
#include <math.h>
int main (){
	int x1,x2,x3,x4,x5,x6;
	float ab,bc,ac;
	printf("nhap toa do cua a ");
	scanf("%d%d",&x1,&x2);
	printf("\nnhap toa do cua b");
	scanf("%d%d",&x3,&x4);
	printf("\nnhap toa do cua c");
	scanf("%d%d",&x5,&x6);
	ab=sqrt(pow((x3-x1),2)+pow((x4-x2),2));
	bc=sqrt(pow((x5-x3),2)+pow((x6-x4),2));
	ac=sqrt(pow((x5-x1),2)+pow((x6-x2),2));
	if (((ab+bc)>ac) && ((ab+ac)>bc) && ((ac+bc)>ab)) { printf("3 diem a b c tao thanh 1 tam giac");
	if (ab==bc || bc==ac || ab==ac) {printf("abc la tam giac can");} else { printf("abc khong phai la tam giac can");
	} 
	float p,s;
	p=ab+bc+ac;
	printf("chu vi tam giac la %f",p);
	// dien tich dung cong thuc herong 
	s=sqrt(p*(p-ab)*(p-bc)*(p-ac));
	printf("dien tich tam giac la %f",s);
	} else {printf("3 diem a b c khong tao thanh 1 tam giac "); 
	}
	printf("\nab:%f",ab);
	printf("\nac:%f",ac);
	printf("\nbc:%f",bc);
}
