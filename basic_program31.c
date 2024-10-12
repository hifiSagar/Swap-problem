// write a program to swap two numbers


#include<stdio.h>
void main(){
int a,b,temp;
printf("Enter a two numbers\n");
scanf("%d%d",&a,&b);
    printf("Before Swap\n");
printf("value of a is : %d\nvalue of b is : %d\n",a,b);
printf("After the swap\n");
temp;
temp=a;
a=b;
b=temp;
printf("value of a is : %d\nvalue of b is : %d",a,b);
}