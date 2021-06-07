#include<stdio.h>
#include<stdlib.h>
//node creation
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL,*ptr;
//function creation
void insert_beg(int value)
{
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->next = NULL;
    if(head== NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}

void insert_nposition(int value,int ele)
{
    struct Node *temp;
    temp= (struct Node*)malloc(sizeof(struct Node));
    temp->data= value;
    temp->next= NULL;
    if(head == NULL)
    {
        head= temp;
    }
    else
    {
        ptr= head;
        while(ptr->data!=ele)
        {
            ptr= ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
    
}

void insert_end(int value)
{
    struct Node *temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data= value;
    temp->next = NULL;
    if(head == NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
          ptr->next=temp;
          temp=NULL;
    }
    
}
void display()
{
    if(head== NULL)
    {
        printf("list is empty");
    }
    else
    {
        ptr=head;
        while(ptr!=NULL)
        {
            printf("->%d",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
    
}
void main()
{
    int value,ele,ch;
    printf("1.Insert at begining\n");
    printf("2.Insert at nposition\n");
    printf("3.Insert at end\n");
    printf("4.display\n");
    printf("5.exit\n");
    while(1)
    {
        printf("Enter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                printf("Enter the value to insert at beginning:");
                scanf("%d",&value);
                insert_beg(value);
                display();
                break;
            }
            case 2:
            {
                printf("Enter the value to insert nposition:");
                scanf("%d",&value);
                printf("Enter the elements:");
                scanf("%d",&ele);
                insert_nposition(value,ele);
                display();
                break;
            }
            case 3:
            {
                printf("Enter the value to insert at end:");
                scanf("%d",&value);
                insert_end(value);
                display();
                break;
            }
            case 4:
            {
                display();
            }
            case 5:
            {
                exit(0);
            }
        }
    }
}