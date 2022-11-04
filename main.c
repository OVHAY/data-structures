#include<stdio.h>
#include<conio.h>
#define st_size 5
int item,top,st10[10];
top=-1;
void push()
{
    if(top==st_size)
    printf("stack overflow");
    else
    {
        top++;
        st[top]=item;
    }
}
void pop()
{
int del;
if(top==-1)
    printf("underflow");
    else
    {
        del=st[top];
        top--;
        return del;
    }
}
void display()
{
    int i;
    if(top==-1)
    printf("stack is empty \n nothing to show");
    else
    {
        for(i=0;i<=top;i++)
        printf("%d\t",st[i]);
    }
}
void main()
{
    void push(void);
void pop(void);
void display(void);
int main()
{
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}}