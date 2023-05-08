#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	node *next;
}node;
node *head = NULL;
node *head2 = NULL;
void create()

{	int i,n;
	node*t;
	head=(struct node *)malloc(sizeof(node));	
	printf("\nEnter the no. of the node in first linked list: ");
	scanf("%d",&n);
	printf("\n Enter the data for he %d node of the second linked list: ",1);
	scanf("%d",&head->data);


	t=head;
	for(i=0;i<n-1;i++)
	{
		t->next=(struct node*)malloc(sizeof(node));
		t=t->next;
		printf("Enter the data for the %d node: ",i+2);
		scanf("%d",&t->data);
		
	}
	t->next=NULL;
	
}
void create2()

{	int i,n;
	node*t;
	head2=(struct node *)malloc(sizeof(node));	
	printf("\nEnter the no. of the node for the second  linked list: ");
	scanf("%d",&n);
	printf("\nEnter the data for %d of second linked list: ",1);
	scanf("%d",&head2->data);


	t=head2;
	for(i=0;i<n-1;i++)
	{
		t->next=(struct node*)malloc(sizeof(node));
		t=t->next;
		printf("\nEnter the data for the %d node: ",i+2);
		scanf("%d",&t->data);
		
	}
	t->next=NULL;
	
}
void display()
{
	node*temp=head;
	if(head==NULL)
	{
		printf("Empty");
	}
	else
	{
		printf("\nData of the first linked list\n");
		while(temp != NULL)
		{
			printf("[%d]\t",temp->data);
			temp=temp->next;
		}
	}
}
void display2()
{
	node*temp=head2;
	if(head2==NULL)
	{
		printf("Empty");
	}
	else
	{
		printf("Data of the second linked list \n");
		while(temp != NULL)
		{
			printf("[%d]\t",temp->data);
			temp=temp->next;
		}
	}
	
	}
	void sum()
	{
		int s=0;
		node *temp=head;
		node *temp2=head2;
		while(temp != NULL && temp2 != NULL)
		{
			s= s+temp->data+temp2->data;
			temp=temp->next;
			temp2=temp2->next;
			
		}
	
	printf("sum is %d",s);
}

	int main()
	{
		create();
		display();
		create2();
		display2();
		sum();
		return 0;
	}

