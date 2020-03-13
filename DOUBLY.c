#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* right;
struct node* left;
};
struct node* root=NULL;
void insertion_beginning();
/*void insertion_last();
void insertion_specified();
void deletion_beginning();
void deletion_last();
void deletion_specified();*/
void display();
//void search();

void main()
{
int ch;
while(1)
{
printf("\nChoose one option from the following list ...\n");
printf("\n===============================================\n");
printf("\n1.Insert in begining: ");
printf("\n2.Insert in specified location: ");
printf("\n3.Insert in end: ");
printf("\n4.delete from begining: ");
printf("\n5.delete from end: ");
printf("\n6.Delete after a specific node: ");
printf("\n7.Search: ");
printf("\n8.display: ");
printf("\n9.Exit");

printf("\nEnter your choice?\n");
scanf("\n%d",&ch);
switch(ch)
{
case 1:
insertion_beginning();
break;
/*case 2:
insertion_last();
break;
case 3:
insertion_specified();
break;
case 4:
deletion_beginning();
break;
case 5:
deletion_last();
break;
case 6:
deletion_specified();
break;
case 7:search();
break;*/
case 8:
display();
break;
case 9:
exit(0);
break;
default:
printf("invalid choice");
}
}
}

void insertion_beginning()
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter node data: ");
scanf("%d",&temp->data);
temp->right=NULL;
temp->left=NULL;
if(root==NULL)
{
root=temp;
}
else
{
temp->right=root;
root=temp->right;
root=temp;
}
}

void display()
{
struct node* temp;
temp=root;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->right;
}
}
