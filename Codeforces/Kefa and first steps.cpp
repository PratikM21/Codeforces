#include<stdio.h>
int main(){
	long int n,a,temp=0,count=0,t=0,i;
	scanf("%ld",&n);
	for(i=0;i<n;i++){
	scanf("%ld",&a);                                   
            	if(t<=a){//2 2 1 3 4 1
            		t=a;
            		count++;
			  if(temp<count){
            		temp=count;
            		}		  
		  }
		  else{	t=a;	  	
		  	count=1;		  
		  }
		  
	  }
           printf("%ld",temp);
	return 0;
}
