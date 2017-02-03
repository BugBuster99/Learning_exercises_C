#include<stdio.h>
int checkwin(char *a[4][4])                 //Function to check if the game is completed
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
	char a[4][4]={15,14,10,9,7,5,12,8,1,6,3,4,2,11,13,' '};     //Initializing char array 
	char ch=' ';                        
	int i,j,k,l,flag;
	i=3;
	j=3;
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
		        printf(" %c |",a[k][l]);                //printing the pattern to the player
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
		{                               //Logic to shift the elements based on user input
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
			i=(i+1)%4;                      //(i+1)%4 is used to overcome bounary over-flow
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
			a[i][j]=a[i][(j+1)%4];      //(j+1)%4 is used to check boundary over-flow
			j=(j+1)%4;
			a[i][j]=' ';
			break;
			case 'Q':
			break;			
		}
		flag=checkwin(&a);                  //To check if the game is completed  
		if(flag==1)                           
        {                                   //To print the matrix if the game is completed
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
