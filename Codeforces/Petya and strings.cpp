#include<stdio.h>
#include<string.h>
int main()
{   int k;
    char s1[100],s2[100];
     scanf("%s",&s1);
    scanf("%s",&s2);
        strlwr(s1);
    strlwr(s2);
 
 
    k=strcmp(s1,s2);
    printf("%d",k);
   return 0;
}
