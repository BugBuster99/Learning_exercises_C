#include <stdio.h>
#include<math.h>
int nextprime(int n)
{
    int i;
    int h=n/2;
    if((n%2)==0||(n%3)==0)
    {
        return 0;
    }
    for(i=5;i<h;i+6)
    {
        if((n%i)==0)
        {
            return 0;
        }
    }
    for(i=7;i<h;i+6)
    {
        if((n%i)==0)
        return 0;
    }
    return 1;
}
int main(void) {
	int x1,x2,n,flag;
	scanf("%d",&n);
	if((n%6)==0)
	{
	    x1=n+1;
	    x2=n+7;
	}
	else
	{
	    x1=n+(n%6)-1;
	    x2=x1+2;
	}
	do
	{
        flag=nextprime(x1);
        if(flag==1)
        {
            printf("%d",x1);
            break;
        }
        flag=nextprime(x2);
        if(flag==1)
        {
            printf("%d",x2);
            break;
        }
        x1=x1+6;
        x2=x2+6;
	}
	while(flag==0);
	return 0;
}

