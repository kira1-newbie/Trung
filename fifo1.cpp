#include<stdio.h>
struct node_list
{
	int dulieu;
	node_list *dchi;
}nl;
struct node_list1
{
	int heso;
	int somu;
	node_list1 *dchi;
}nl1;
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
node_list1 *chensau1(node_list1 *head,node_list1 *temp)
{
	node_list1 *p;
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
void nhap1(node_list **head)
{
	*head=NULL;
	node_list *temp;
	do
	{
		temp=new node_list;
		scanf("%d",&temp->dulieu);
		if(temp->dulieu!=0)
		{
		temp->dchi=NULL;
		*head=chensau(*head,temp);
	}
	}
	while(temp->dulieu!=0);
}
node_list1 *nhap2(node_list1 *head,int &n)
{
	node_list1 *temp;
	int sm=0;
	head=NULL;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("Nhap he so:");
	for(int i=1;i<=n;i++)
	{
		temp=new node_list1;
		scanf("%d",&temp->heso);
		temp->somu=sm;
		sm++;
		temp->dchi=NULL;
		head=chensau1(head,temp);	
	}
	return head;
}
void xuat1(node_list1 *head)
{
	node_list1 *temp;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->heso%2==0)
		printf("%d*x^%d ",temp->heso,temp->somu);
		temp=temp->dchi;
	}
}
void xuat(node_list *head)
{
	node_list *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->dulieu);
		temp=temp->dchi;
	}
}
main()
{
	node_list *head;
	node_list1 *head1;
	int n;
	head1=nhap2(head1,n);
//	nhap1(&head);
//	xuat(head);
	printf("\n");
	xuat1(head1);
} 
