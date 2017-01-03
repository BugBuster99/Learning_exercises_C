#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char sher[100];
    scanf("%s",sher);
    int i,j,count,k;
    k=0;
    int a[3]={0};
    for(i=0;sher[i]!='\0';i++){
        if(sher[i]!='?'){
            count =1;
        }
        else{
            continue;
        }
        for(j=i+1;j!='\0';j++){
            if((sher[i]!='?') && (sher[i]==sher[j])){
                count++;
                sher[j]='?';
            }
        }
        sher[i]='?';
        if((a[k]!= 0) && (a[k] != count)){
            a[k+1]=count;
            k++;
        }
        else if(a[k]==0){
            a[k]=count;
        }
        if(k==2){
            printf("NO");
            break;
        }
    }
    if((k<2) && ((a[0]-a[1]==1) || (a[0]-a[1]==-1) || (a[0]==a[1]))){
        printf("YES");
    }
    return 0;
}
