#include<stdio.h> 
struct nut { 
 int dl; 
 nut *sau; 
}; 
nut *them_LIFO(nut *dau, nut *pt) 
{ 
 nut *tg, *cuoi; 
 if(dau==NULL) 
  { 
   dau=pt; 
   dau->sau=dau; 
  } 
 else 
  { 
   tg=dau; 
   while(tg->sau!=dau) 
    tg=tg->sau; 
   cuoi=tg;  
   pt->sau=dau; 
   dau=pt;  
   cuoi->sau=dau; 
  } 
 return dau; 
} 
nut *them_FIFO(nut *dau, nut *ptu) 
{ 
 nut *tg; 
 if(dau==NULL) 
  { 
   dau=ptu; 
   dau->sau=dau; 
  } 
 else 
  { 
   tg=dau; 
   while(tg->sau!=dau) 
    tg=tg->sau; 
   tg->sau=ptu;  
   ptu->sau=dau; 
  } 
 return dau;  
} 
nut *nhapdslk(nut *dau, int so) 
{ 
 int i, n; 
 nut *pt; 
 dau=NULL; 
 printf("nhap so luong phan tu: "); 
 scanf("%d",&n); 
 for(i=1;i<=n;i++) 
  { 
   pt = new nut; 
   printf("nhap so thu %d: ", i); 
   scanf("%d",&pt->dl); 
   pt->sau=NULL; 
   if(so==1)  
    dau = them_LIFO(dau,pt); 
   if(so==2) 
    dau = them_FIFO(dau,pt); 
  } 
 return dau;  
} 
void in(nut *dau) 
{ 
 nut *tg; 
 if(dau==NULL) 
  printf("danh sach rong"); 
 else 
  { 
   tg=dau; 
   do 
   { 
    printf("%d ",tg->dl); 
    tg=tg->sau; 
   }while(tg!=dau); 
    
  }  
} 
nut *search(nut *dau, int so)//tra ve con tro 
{ 
 nut *tg; 
 if(dau!=NULL) 
  { 
   tg=dau; 
   do 
    { 
     if(tg->dl==so) 
      return tg; 
     tg=tg->sau;  
    } 
   while(tg!=dau); 
  } 
 return NULL;  
} 
nut *chen(nut *dau, int so)
{
	nut *t,*temp,*p;
	p=new nut;
	p->dl=so;
	p->sau=NULL;
	temp=dau;
	if(so<dau->dl)
	 {
	 p->sau=dau;
	dau=p;
	}
	else 
	{
		while(temp!=dau&&temp->dl<so)
		{
			t=temp;
			temp=temp->sau;
		}
		p->sau=t->sau;
		t->sau=p;
	}
	return dau;
}
main() 
{ 
 int  x; 
 nut *dau, *dau1, *dau2; 
 printf("1: tao day so lien ket dang LIFO\n"); 
 printf("2: tao day so lien ket dang FIFO\n"); 
 printf("3: Chen 1 so thich hop trong day tang dan");
 do 
 { 
  printf("\nnhap bai can lam: (nhap 0 de thoat) "); 
  scanf("%d",&x); 
  switch(x) 
  { 
   case 1: 
    dau=nhapdslk(dau,1); 
    printf("danh sach lien ket dang LIFO la: \n"); 
    in(dau); 
    break; 
   case 2: 
    dau=nhapdslk(dau,2); 
    printf("danh sach lien ket dang FIFO la: \n"); 
    in(dau);  
    break; 
  case 3:
  	 {
  	 	int a;
  	 	printf("Nhap so can chen: ");
  	 	scanf("%d",&a);
  	 dau=chen(dau,a);
		in(dau);	   	
	 break;	
	 }
/*	case 4:
		{
			
			break;
		}
	case 5:
		{
			
		}
	case 6:
		{
			
		}
	case 7:
		{
			
		}
*/
  } 
 }while(x!=0); 
} 

