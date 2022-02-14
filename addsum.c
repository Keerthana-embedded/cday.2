#include<stdio.h>
int main()
{
int n,j=0;
while(1)
{
printf("enter n");
scanf("%d",&n);
if(n>0)
	j=j+n;
else
	break;
}
printf("%d\n",j);
}
	
