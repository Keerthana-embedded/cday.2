#include<stdio.h>
int main()
{
int min,max,i,j=0,k=0,n;
printf("enter min value");
scanf("%d",&min);
printf("enter max value");
scanf("%d",&max);
for(i=min;i<=max;i++)
{
if(i%2==0)
	k=k+i;
else
	j=j+i;
}
printf("sum of even=%d\n",k);
printf("sum of odd=%d\n",j);
}
