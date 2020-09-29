#include <stdio.h>
#include <process.h>
#define STACK_SIZE 3

int top=-1,st[10];
void push();
void pop();
void display();


int main()
{
int a;
for(;;)
{
printf("\nSTACK MENU IS FOLLOWING\n");
printf("\n------------------\n");
printf("\n1)PUSH \n2)POP\n3)DISPLAY\n4)EXIT\n");
printf("\n------------------\n");
printf("ENTER YOUR CHOICE:");
scanf("%d",&a);
switch (a)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:exit(0);
default:
printf("\nINVALID OPTION IS ENTERED\n");
}
}
return 0;
}

void push()
{
int item;
{
if(top==STACK_SIZE-1)
{
printf("\nSTACK OVERFLOW\n");
}
else
{
printf("\nENTER THE ELEMENT TO BE INSERTED :  ");
scanf("%d",&item);
top=top+1;
st[top]=item;
}
}
}

void pop()
{
if(top==-1)
{
printf("\nSTACK UNDERFLOW\n");
}
else
{
printf("TOP VALUE OF STACK HAS BEEN DELETED:%d",st[top]);
top=top-1;
}
}


void display()
{
int i;
if(top==-1)
{
printf("\nSTACK IS EMPTY\n");
}
else
{
printf("\nCONTENTS IN STACK ARE:\n");
for(i=top;i>=0;--i)
printf("%d\n",st[i]);
}
}
