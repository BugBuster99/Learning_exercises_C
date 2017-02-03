#include<stdio.h>
int checkwin(char *a[4][4])
{
    int i,j,temp=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==3 && j==3 && a[i][j]==' ')
            {
                return 1;
            }
            if((a[i][j])!=temp)
            {
                return 0;
            }
        }
    }
}
void main()
{
	char a[4][4];
	char ch=' ';
	int i,j,k,l,flag;
	i=1;
	for(k=0;k<4;k++)
	{
		for(l=0;l<4;l++)
		{
			a[k][l]=i;
			i++;
		}
	}
	
	i=3;
	j=3;
	a[i][j]=' ';
    flag=0;
	while (ch!='Q'&&flag==0)
	{
	    for(k=0;k<4;k++)
	{
	    printf("-------------------\n|");
		for(l=0;l<4;l++)
		{
		    if(a[k][l]==32)
		    {
		        printf(" %c |",a[k][l]);
		    }
		    else
		    {
			    printf(" %d |",a[k][l]);
		    }
		}
		printf("\n");
	}	
	printf("-------------------");
		printf("\n\nU-up D-down L-left R-right\nEnter Your choice:");
		scanf("%c",&ch);
		printf("\n");
		switch(ch)
		{
			case 'U':
			i-=1;
			if(i==-1)
			{
			    a[0][j]=a[3][j];
			    a[3][j]=' ';
			    i=3;
			}
			else
			{
			    a[i+1][j]=a[i][j];
			    a[i][j]=' ';
			}
			break;
			case 'D':
			a[i][j]=a[(i+1)%4][j];
			i=(i+1)%4;
			a[i][j]=' ';
			break;
			case 'L':
			j-=1;
			if(j==-1)
			{
			    a[i][0]=a[i][3];
			    a[i][3]=' ';
			    j=3;
			}
			else{
			    a[i][j+1]=a[i][j];
			    a[i][j]=' ';
			}
			break;
			case 'R':
			a[i][j]=a[i][(j+1)%4];
			j=(j+1)%4;
			a[i][j]=' ';
			break;
			case 'Q':
			break;			
		}
		flag=checkwin(&a);
		if(flag==1)
        {
        for(k=0;k<4;k++)
	    {
	        printf("-------------------\n|");
    		for(l=0;l<4;l++)
    		{
    		    if(a[k][l]==32)
	    	    {
		            printf(" %c |",a[k][l]);
		        }
    		    else
    		    {
	    		    printf(" %d |",a[k][l]);
	    	    }
		    }
		    printf("\n");
	    }
	printf("-------------------\n\nCongrats!!!! You Won!!");	    
	}
	}
} 
