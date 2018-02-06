#include<stdio.h>
int main()
{
int m,n,o,p,q;
printf("Enter the number");
scanf("%d",&m);
n=m/100;
o=m%100;
p=o%10;
q=o/10;
printf("Digits..:\t%d\t%d\t%d",n,q,p);
return 0;
}
