#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
int info;
struct node *next;
};

void main()
{
int num,i;
struct node *head=NULL;
struct node *temp;
clrscr();
temp=(struct node*)malloc(sizeof(struct node));
for(i=0;i<4;i++)
{
printf("Enter num insert");
scanf("%d",&num);
}
head->info=num;
head->next=NULL;
while(head->next !=NULL)
{
head=head->next;
}
head->next=head;

while(temp !=NULL)
{
printf("ele %d",temp->info);
temp=temp->next;
}
getch();
}