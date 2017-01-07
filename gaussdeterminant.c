#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int i,j,a[n][n];
	
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&a[i][j]);
	    }
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        
	        {
	            
	            a[i+1][j]=(a[i+1][j]*a[i][j])-(a[i][j]*a[0][j]);
	        }
	    }
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        printf("%d\t",a[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}

