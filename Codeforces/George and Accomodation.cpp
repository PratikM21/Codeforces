#include<stdio.h>
int main(){
	
   int a,i,count=0,p,q;
   scanf("%d",&a);
   for(i=1;i<=a;i++){
   	scanf("%d",&p);
   	scanf("%d",&q);
   	if(q>=p+2){
   		count++;
	   }
   }
   printf("%d",count);
   return 0;
   
}
