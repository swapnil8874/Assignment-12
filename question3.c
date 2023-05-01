//Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void oddNatural(int n);
int main()
{
    int n;
    printf("Enter The number\n");
    scanf("%d",&n);
    oddNatural(n);
    return 0;
}
void oddNatural(int n)
{
    if(n>=1)
    {
        oddNatural(n-1);
        printf("%d ",2*n-1);
    }
    
}