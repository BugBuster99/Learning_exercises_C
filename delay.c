#include <stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(void) {
    int i,j,k;
	char s[12]={'H','A','P','P','Y',' ','P','O','N','G','A','L'};
	for(i=0;s[i]!='\0';i++){
	    printf("%c",s[i]);
	    
	    sleep(1);
	}
	
	return 0;
}

