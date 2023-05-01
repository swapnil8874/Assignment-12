//recursive function to print squares of first N natural numbers
#include<stdio.h>
void squ(int n);
int main()
{
    int n;
    printf("Enter The Value\n");
    scanf("%d",&n);
    squ(n);
    return 0;
}
void squ(int n)
{
    if(n>1)
    squ(n-1);
    printf(" %d ",n*n);
}