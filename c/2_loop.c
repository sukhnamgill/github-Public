#include <stdio.h>
#include <conio.h>
int main(){
    printf("hello sukhnam");
    int i;
    int input;
    printf("\nEnter some value:");
    scanf("%d",&input);
    for(i=0;i<input;i++){
        printf("\nhappy birthday %d times",i);
    }


    return 0;
}