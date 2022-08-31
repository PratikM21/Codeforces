#include<stdio.h>
int main(){
	int t,n,i,j=0,k=0,br=0,vag,vagr,count=0;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%d",&n);
			while(k!=n){
				j++;
				k=0;
				br=0;
		     while(k!=n){
			count++;
			k=k*10+j;
			br++;
			if(br==4){
				break;
			}
		 }
    	}
      if(count>=4){
      	vag=count/4;
      	vagr=vag*10;
      	if(count%4==3){
      		vagr=vagr+6;
		  }
		  else if(count%4==2){
		  	vagr=vagr+3;
		  }
		  else if(count%4==1){
		  	vagr=vagr+1;
		  }
		  printf("%d",vagr);
	  }
	  
	  else if(count==3){
	  	printf("6");
	  }
	  else if(count==2){
	  	printf("3");
	  }
	  else if(count==1){
	  	printf("1");
	  }
	  count=0;
	  j=0;
	  k=0;
}
   
   return 0;
}
