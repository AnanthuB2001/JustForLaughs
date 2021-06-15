#include<stdio.h>
#include<stdlib.h>
void main(){
    char op;
    int a,b,c,i;
    while(1){
    printf("\n_");
    scanf("%d",&a);
    printf("+  -  x  /\t");
    scanf(" %c",&op);
    scanf("%d",&b);

    switch(op){
        case('+'):
        c=a+b;
        printf(" %d + %d = %d\n",a,b,c);
        break;

        case('-'):
        c=a-b;
        printf("%d - %d = %d\n",a,b,c);
        printf("https://youtu.be/rTjBp5q3in0");
        break;

        case('x'):
        c=a*b;
        for(i=0;i<b;i++)
        printf(" %d x %d = %d\n",a,i,a*i);
        printf("\n %d x %d = %d\n",a,b,c);
        break;

        case('/'):
        c=a%b;
        printf("%d mod %d = %d\n",a,b,c);
        printf("Oh , and by the way...You'll die SINGLE\n");
        break;

        default:
        printf("THANKS FOR COMING , NEXT TIME USE A REAL CALCULATOR");
        exit(0);

        

    }
    }
}