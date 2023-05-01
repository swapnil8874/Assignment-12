//Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void octal(int n);
int main()
{
    int x;
    printf("Enter the value\n");
    scanf("%d",&x);
    octal(x);
    return 0;

}
void octal(int n)
{
    if(n==0)
    return;
    octal(n/8);
    printf("%d",n%8);
}