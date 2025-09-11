#include<stdio.h>
struct node
{
	int dl;
	node *tiep;
}n;
node *bsung_sau(node *head, node *temp)		
{
	node *p;
	if(head==NULL)
		head=temp;
	else 
	{
		p=head;
		while(p->tiep!=NULL)
			p=p->tiep;
		p->tiep=temp;
	}
	return head;
}
node *bsung_truoc(node *head, node *temp)
{
	if(head==NULL)
		head=temp;
 else 
		{
			temp->tiep=head;
			head=temp;
		}
	return head;
}
node *nhap_fifo(node *head)
{
	node *temp;
	int n;
	head=NULL;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		temp= new node;
		printf("Nhap so thu %d ",i);
		scanf("%d",&temp->dl);
		temp->tiep=NULL;
		head=bsung_sau(head,temp);
	}
	return head;
}
void *xuat(node *head)
{
	node *temp;
	temp=head;
	while(temp!=NULL)
		{
			printf("%d ",temp->dl);
			temp=temp->tiep;
		}
}
node *nhap_lifo(node *head)
{
	head=NULL;
	node *temp;
	int n;
	printf("Nhap so phan tu ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	temp=new node;
	printf("Nhap so thu %d ",i);
	scanf("%d",&temp->dl);
	temp->tiep=NULL;
	head=bsung_truoc(head,temp);
	}
	return head;
}
int timkiem_1(node *head, int x)
{
	node *temp;
	temp=head;
	while(temp!=NULL)
	 {
	 	if(temp->dl==x) return 1;
		temp=temp->tiep;
	}
	 return 0;
}
node *timkiem_2(node *head,int x)
{
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->dl==x) return temp;
		temp=temp->tiep;
	}
}
node *xoa(node *head, int x)
{
/*	node *temp;
	node *p; 
	temp=head;
	while(head!=NULL&&head->dl==x)
	{
		head=head->tiep;
	}
	temp=head;
		while(temp!=NULL)
		{
			p=timkiem_2(head,x);
			if(p!=NULL)
			{
			while(temp->tiep!=p)
				temp=temp->tiep;
			temp->tiep=p->tiep;
			p->tiep=NULL;
			}
			else temp=temp->tiep;
		}
	return head;
*/
node *temp;
	temp=head;
	while(head!=NULL&&x==head->dl)
		head=head->tiep;
	while(temp!=NULL)
	{
		node *p=timkiem_2(head,x);
		if(p!=NULL&&temp->tiep->dl==x) 
			{
				temp->tiep=p->tiep;
				p->tiep=NULL;
			}
		else temp=temp->tiep;
	}
	return head;
}
node *chen(node *head,int x)
{
/*	node *p,*t;
	node *temp;
	temp=head;
	p= new node;
	p->dl=x;
	p->tiep=NULL; 
	if(x<=head->dl)
	 {
	 	p->tiep=head;
	 	head=p;
	 }
	else
	{
		while(temp!=NULL&&temp->dl<x)
			{
			t=temp;
			temp=temp->tiep;
		    }
		p->tiep=t->tiep;
		t->tiep=p;
	}	
	return head;
*/
node *p;
	p=new node;
	p->dl=x;
	p->tiep=NULL;
	node *temp;
	temp=head;
	if(x<=head->dl)
	 {
	 	p->tiep=head;
	 	head=p;
	 }
	 else
	 {
	 	node *t;
	while(temp!=NULL&&temp->dl<x)
		{
		t=temp;
		temp=temp->tiep;
		}
	p->tiep=t->tiep;
	t->tiep=p;
		}
	return head;
}	
node *tangdan(node *head)
{
	node *temp;
	temp=head;
	node *i,*j;
	for(i=temp;i!=NULL;i=i->tiep)
		for(j=i->tiep;j!=NULL;j=j->tiep)
		if(i->dl>j->dl)
		{
			int x;
			x=i->dl;
			i->dl=j->dl;
			j->dl=x;
		}
	return head;
}
node *tron(node *head1,node *head2)
{
	node *t1,*t2;
	t1=head1;
	t2=head2;
	node *head=NULL;
	int x;
	while(t1!=NULL&&t2!=NULL)
	{
		if(t1->dl<t2->dl)
		{node *t;
			t=new node;
			t->tiep=NULL;
			t->dl=t1->dl;
			head=bsung_sau(head,t);
			t1=t1->tiep;
			x=t->dl; 
		}
		else 
		{
		if(t2->dl<t1->dl)
		{
			node *t;
			t=new node;
			t->tiep=NULL;
			t->dl=t2->dl;
			head=bsung_sau(head,t);
			t2=t2->tiep;
			x=t->dl;
		}
		else t1=t1->tiep; 
		}
	}
		while(t1!=NULL)
		{
			if(t1->dl>x)
			{	
			node *t;
			t=new node;
			t->tiep=NULL;
			t->dl=t1->dl;
			head=bsung_sau(head,t);
			x=t->dl;
			t1=t1->tiep;
			}
			else t1=t1->tiep; 
		}
			while(t2!=NULL)
		{
			if(t2->dl>x)
			{
				node *t;
			t=new node;
			t->tiep=NULL;
			t->dl=t2->dl;
			head=bsung_sau(head,t);
			x=t->dl;
			t2=t2->tiep;
			}
			else t2=t2->tiep; 
		}
	return head;
}
main()
{
	node *head;
	int x,a,k;
	printf("1: tao day so lien ket dang LIFO\n"); 
 	printf("2: tao day so lien ket dang FIFO\n"); 
 	printf("3: chen 1 so thich hop vao day tang dan\n"); 
 	printf("4: xoa 1 so trong day so\n");
 	printf("5: sap xep day tang dan\n"); 
 	printf("6: kiem tra mot so co trong day so hay khong\n");
 	printf("7: co 2 day so, ghep hai day so thanh 1 day tang dan\n"); 
 	do 
 	{ 
  		printf("\nnhap bai can lam: (nhap 0 de thoat) "); 
  		scanf("%d",&k); 
  		switch(k) 
  	{ 
   		case 2: 
    	head=nhap_fifo(head);
		xuat(head);
    	printf("\n");
    	break; 
   		case 1: 
    	head=nhap_lifo(head);
		xuat(head);
		printf("\n"); 
    	break; 
    	case 3:
    	printf("\nNhap phan tu can chen");
		scanf("%d",&a);
		head=chen(head,a);
		xuat(head);
		break;
		case 4:
		printf("Nhap phan tu can xoa");
		scanf("%d",&a);
		head=xoa(head,a);
		xuat(head);	
		break;
		case 5:
		printf("\n");
		head=tangdan(head);
		printf("Danh sach tang dan:\n");
		xuat(head);	
		break;
		case 6:
		printf("Nhap phan tu can tim");
		scanf("%d",&x);
		if(timkiem_1(head,x)==1) printf("Tim thay!\n");
		else printf("Khong tim thay!\n");	
		break;
		case 7:
		{
			node *head1,*head2;
			node *head3;
			printf("Nhap day 1:\n");
			head1=nhap_fifo(head1);
			printf("Nhap day 2:\n");
			head2=nhap_fifo(head2);
			head1=tangdan(head1);
			head2=tangdan(head2);
			head3=tron(head1,head2);
			xuat(head3);		
		}
		break;		
  } 
 }while(k!=0); 
}
