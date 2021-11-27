#include<stdio.h>

int main(){
    int num,i;
    float fact=1;
    printf("Enter the number :");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
        fact=fact*i;
        printf("Factorial of %d is: %f\n",num,fact);
    return 0;
}
