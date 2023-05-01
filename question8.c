//recursive function to print binary of a given decimal number
#include<stdio.h>
void binary(int n);
int main()
{
    int x;
    printf("Enter the value\n");
    scanf("%d",&x);
    binary(x);
    return 0;

}
void binary(int n)
{
    if(n==0)
    return;
    binary(n/2);
    printf("%d",n%2);
}