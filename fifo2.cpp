#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
struct node_list
{
	char kytu;
	node_list *dchi;
}nl;
node_list *chensau(node_list *head,node_list *temp)
{
	 node_list *p;
	 if(head==NULL)
	 	head=temp;
	else 
		{
			p=head;
			while(p->dchi!=NULL)
				p=p->dchi;
			p->dchi=temp;
		}
	return head;
}
node_list *nhap(node_list *head,int &n)
{
	char kt;
	int  x; 
	printf("Nhap n: ");
	scanf("%d",&n);
	node_list *temp;
	head=NULL;
	for(int i=1;i<=n;i++)
	 {
	 	temp=new node_list;
//	 	scanf("%c",&temp->kytu);
			kt='A'; 
			x=rand()%26;
	 	kt=kt+x;
	temp->kytu=kt; 
		temp->dchi=NULL;
		head=chensau(head,temp);
	 }
	return head;
}
void xuat1(node_list *head) 
{
	node_list *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%c ",temp->kytu);
		temp=temp->dchi;
	}
}
main()
{
	srand((int)time(NULL));
	node_list *head;
	int n;
	head=nhap(head,n);
	xuat1(head);
}
