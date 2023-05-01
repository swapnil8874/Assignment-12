//recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void printNatural(int n);
int main()
{
    int n;
    printf("Enter The number\n");
    scanf("%d",&n);
    printNatural( n);
    return 0;
}
void printNatural(int n)
{
     if(n>=1)
      printf("%d ",n);
      printNatural(n-1);
      
   
}