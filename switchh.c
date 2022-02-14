#include<stdio.h>
int main()
{
int n,j=0,f=0;
while(1)
{
printf("enter n");
scanf("%d",&n);
if(n>0)
{
	j=j+n;
        if(f==1)
	break;
}
else
{
	f=1;
	continue;
}
}
printf("%d\n",j);
}
	
