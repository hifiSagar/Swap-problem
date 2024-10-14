#include<stdio.h>
#include<stdlib.h>
int main(){

int*ptr,num;
printf("Enter the valuento store dynamically\n");
scanf("%d",&num);
ptr=(int*)malloc(sizeof(int));
ptr=&num;
printf("Stored value is : %d\n",ptr);
    return 0;
}