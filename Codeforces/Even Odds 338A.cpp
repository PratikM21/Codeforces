#include<stdio.h>
          void answer(int x,int y, int w, int z,int i){

	          if(x<=y){
			for(i=1;i<=x;i++){
				w=w+2;
			
			}
			printf("%lld",w);
	          }
	          else{
	          for(i=y;i<x;i++){
	          z=z+2;	
		}
		printf("%lld",z);	
		}
	}
int main(){
	long long int n,k,key,i;
	scanf("%lld%lld",&n,&k);
	long long int odd=-1;
	long long int even=0;
          n%2!=0? key=(n/2)+1:key=n/2;
	answer(k,key,odd,even,i);
	return 0;  
}
