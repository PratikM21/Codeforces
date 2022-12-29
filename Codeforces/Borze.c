#include<stdio.h>
#include<string.h>
int main(){
       char s[200];
       scanf("%s",s);
       int i, l=strlen(s);

       for(i=0;i<l;i++){
        if(s[i]=='.'){
            printf("0");
        }
        else{
            if(s[i]=='-'){
                if(s[i+1]=='-'){
                    printf("2");
                    i++;
                }
                else if(s[i+1]=='.'){
                    printf("1");
                    i++;
                }
            }
        }
       }


return 0;}
