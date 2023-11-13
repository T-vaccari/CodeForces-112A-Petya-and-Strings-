#include <stdio.h> 
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 101



int main (){
    char str1[MAX];
    char str2[MAX];
    scanf("%s %s",str1,str2);
    
    int flag =0;
    for(int i=0; i<strlen(str1);i++){
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
    }
    for(int i=0; i<strlen(str1);i++){
        if(str1[i]<str2[i]){
            printf("%d",-1);
            flag=1;
            break;
        }
        if(str1[i]>str2[i]){
            printf("%d",1);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("%d",0);
    }
    






    return 0;
}



