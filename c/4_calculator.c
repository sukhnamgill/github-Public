#include <stdio.h>

void main(){
int x,y;
char op;
printf("Welcome in sukhnam's calculator\n");

printf("Enter value for First Number");
scanf("%d",&x);
getchar();
printf("Enter Opertor");
scanf("%c",&op);
printf("Enter Second Number");
scanf("%d",&y);
printf("the value of x is %d\n value of y is :%d\n the oprator is :%c",x,y,op);

switch(op){
    case '+':
    printf("this is addition\n the answer is :");
    printf("%d",x+y);
    break;

    case '-':
    printf("this is Minus \n the answer is :");
    printf("%d",x-y);

    break;

    case '*':
    printf("This is multiply \n the answer is :");
    printf("%d",x*y);
    break;

    case '/':
    printf("this is divide button\n the answer is :");
    printf("%d",x/y);
    break;

    default:
    printf("error in value inputing ");
}






}