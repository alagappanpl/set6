#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a%2==0)
    printf("the even num is %d",a);
    else
    printf("the even num is %d",a-1);
return 0;
}
