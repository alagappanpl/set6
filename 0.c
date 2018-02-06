#include <stdio.h>
#include<math.h>
#define pi 3.14
int main(void) {
	int m;
	float res;
	scanf("%d",&m);
	res=sin(m*pi/180);
	printf("%f",res);
	return 0;
}
