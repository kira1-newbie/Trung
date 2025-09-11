#include<stdio.h>
#include<string.h>

struct sv
{
    int masv;
    char tensv[25];
    char lop[5];
    float dtb;
    sv *next;
};

sv *bsung_sau(sv *head, sv *temp)
{
    if (head == NULL)
    {
        head = temp;
        temp->next = head;
    }
    else
    {
        sv *p = head;
        while (p->next != head)
        {
            p = p->next;
        }
        p->next = temp;
        temp->next = head;
    }
    return head;
}

sv *nhap(sv *head)
{
    int x;
    sv *temp;
    head = NULL;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        temp = new sv;
        printf("Sinh vien %d\n", i);
        printf("Nhap ma sv: ");
        scanf("%d", &temp->masv);
        getchar();
        printf("Nhap ten: ");
        gets(temp->tensv);
        printf("Nhap lop: ");
        gets(temp->lop);
        printf("Nhap diem trung binh: ");
        scanf("%f", &temp->dtb);
        temp->next = NULL;
        head = bsung_sau(head, temp);
    }
    return head;
}

void xuat(sv *head)
{
    if (head == NULL) return;
    sv *temp = head;
    printf("\nDanh sach sinh vien:\n");
    do
    {
        printf("\nMa sinh vien: %d", temp->masv);
        printf("\nTen sinh vien: %s", temp->tensv);
        printf("\nLop: %s", temp->lop);
        printf("\nDiem trung binh: %.2f\n", temp->dtb);
        temp = temp->next;
    } while (temp != head);
}

sv *xoa(sv *head,char lop1[])
{
	getchar();
	printf("Nhap lop can xoa: ");
	gets(lop1);
	sv *temp;
	sv *t;
	while(head->next!=head&&strcmpi(head->lop,lop1)==0)
		{
			head=head->next;
		}
	temp=head;
	while(temp->next!=head)
	{ 
	while(temp->next!=head&&strcmpi(temp->next->lop,lop1)==0)
	{
		t=temp->next;	
		temp->next=t->next;
		t->next=head;
	}    
		if(temp->next!=head) temp=temp->next;
	}
	if(head->next==head&&strcmpi(head->lop,lop1)==0)
		head=NULL;
	return head;
}
void tach_dtb(sv *&head, sv *&head1, sv *&head2)
{
    head1 = head2 = NULL;
    if (head == NULL) return;
    sv *temp = head;
    do
    {
        sv *node = temp;
        temp = temp->next;
        node->next = node;
        if (node->dtb < 5)
            head1 = bsung_sau(head1, node);
        else
            head2 = bsung_sau(head2, node);
    } while (temp != head);
    head = NULL;
}

int main()
{
    sv *head, *head1, *head2;
    char lop1[20];
    head = nhap(head);
    xuat(head);
    printf("\n--- Xoa sinh vien theo lop ---\n");
    head = xoa(head, lop1);
    xuat(head);
    tach_dtb(head, head1, head2);
    printf("\nSinh vien co dtb <5:\n");
    xuat(head1);
    printf("\nSinh vien co dtb >=5:\n");
    xuat(head2);
    return 0;
}

