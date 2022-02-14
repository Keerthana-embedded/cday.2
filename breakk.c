#include<stdio.h>
int main()
{
double i,j;
char k;
printf("enter choice a:add s:subtract\n");
scanf("%c",&k);
switch(k)
{
	case 'a':printf("enter value i\n");
		 scanf("%lf",&i);
		 printf("enter value j\n");
		 scanf("%lf",&j);
                 printf("sum=%lf",i+j);
                  break;

	case 's':printf("enter value i\n");
		 scanf("%lf",&i);
		 printf("enter value j\n");
		 scanf("%lf",&j);
                 printf("sum=%lf",i-j);
                  break;
	default: printf("no action");
		     break;
}
}
