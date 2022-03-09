#include<stdio.h>
#include<stdlib.h>
void main()
{
int stack[30],top=-1,ele,n,i,ch;
void push();
void pop();
printf("\nenter the size of stack:");
scanf("%d",&n);
do
{
printf("\n1.push\n2.pop\n3.exit");
printf("\n enter your choice:");
scanf("%d",&ch);
printf("%d",ch);
switch(ch)
{
case 1:
if(top==n-1)
{
printf("Stack Overflow");
}
else
{
printf("\nenter the element to be inserted:");
scanf("%d",&ele);
top++;
stack[top]=ele;
}
break;
case 2:
{
if(top==-1)
{
printf("Stack Underflow");
}
else
{
printf("The popped element is %d",stack[top]);
top--;
}
}
break;
case 3:exit(0);
}
}
while(ch!=3);
}

