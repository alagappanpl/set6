#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the two numbers");
    scanf("%d%d",&m,&n);
    printf("\nBefore swapping the numbers are %d   %d",m,n);
    m^=n;
    n^=m;
    m^=n;
    printf("\nAfter swapping the numbers are %d   %d",m,n);
    return 0;
}
