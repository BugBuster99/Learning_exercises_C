#include <stdio.h>
#include<math.h>
int genprime(int n,int sq)
{
    int i,j,d;
    if(n%2==0)
    {
        return 0;
    }
    for(i=3;i<sq;i+2)
    {
        d=1;
        for(j=3;j<i;j+2)
        {
            if((i%j)==0)
            {
                d=0;
                break;
            }
        }
        if(d==1)
        {
            if(n%i==0)
            {
                d=0;
                return 0;
            }
        }
    }
    if(d==1)
    {
        return 1;
    }
    
}
int main(void) {
	int n,sq,flag;
	flag=0;
	scanf("%d",&n);
	while(flag==0)
	{
	    n=n+1;
	    sq=sqrt(n);
	    flag=genprime(n,sq);
	    if(flag==1)
	    {
	        printf("%d",n);
	    }
	}
	return 0;
}

