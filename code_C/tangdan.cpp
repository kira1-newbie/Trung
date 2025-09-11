#include<stdio.h>
struct node
{
	int dl;
	node *tiep;
}nd;
node *bsung_sau(node *head, node *temp)
{
	if(head==NULL)
		head=temp;
	else
		{
			node *p;
			p=head;
			while(p->tiep!=NULL)
			{
				p=p->tiep;
			}
			p->tiep=temp;
		}
	return head;
}
node *nhap(node *head)
{
	node *temp;
	head=NULL;
	int x;
	printf("Nhap 0 de dung: ");
	do
	{
		scanf("%d",&x);
		if(x!=0)
		{
			temp=new node;
			temp->tiep=NULL;
			temp->dl=x;
			head=bsung_sau(head,temp);
		}
	}
	while(x!=0);
	return head;
}
node *tim_kiem(node *head,int x)
{
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->dl==x) return temp;
		temp=temp->tiep;
	}
	return NULL;
}
node *chen(node *head,int x)
{
	node *temp;
	node *t;
	if(x<head->dl)
	{
		temp=new node;
		temp->dl=x;
		temp->tiep=head;
		head=temp;
	}
	else
	{
		temp=head;
		while(temp!=NULL&&temp->dl<x)
		{
			t=temp;
			temp=temp->tiep;
		}
		node *p;
		p=new node;
		p->dl=x;
		p->tiep=temp;
		t->tiep=p;
	}
	return head;
}

node* sxep(node* head) {
    if (head == NULL) return NULL;

    node* head_tang = head;
    node* temp1;
    node* t;

    head = head->tiep;
    head_tang->tiep = NULL;

    while (head != NULL) {
        temp1 = head;
        head = head->tiep;
        if (temp1->dl < head_tang->dl) {
            temp1->tiep = head_tang;
            head_tang = temp1;
        } else {
            t = head_tang;
            while (t->tiep != NULL && t->tiep->dl <= temp1->dl) {
                t = t->tiep;
            }
            temp1->tiep = t->tiep;
            t->tiep = temp1;
        }
    }

    return head_tang;
}

void xuat(node *head)
{
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->dl);
		temp=temp->tiep;
	}
}
main()
{
	node *head,*head1;
	head=nhap(head);
	xuat(head);
	printf("\n");
	head1=sxep(head);
	xuat(head1);
}
