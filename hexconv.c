#include<stdio.h>
#include<math.h>
void main()
{
    int n,rem;
    char c[4]={'0'};
    scanf("%d",&n);
    int i=3;
    while(n>0)
    {
        rem=n%16;
        if(rem>9)
        {
           c[i]=(rem+55);
        }
        else
        {
            c[i]=(rem+48);
        }
        --i;
        n=n/16;
    }
    printf("%s",c);
    
}
