//recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void evenNatural(int n);
int main()
{
    int n;
    printf("Enter The number\n");
    scanf("%d",&n);
    evenNatural(n);
    return 0;
}
void evenNatural(int n)
{
    if(n>=1)
    {
        printf(" %d ",2*n);
         evenNatural(n-1);
         
       
    }
    
}