#include<stdio.h>
int main(){
	int stops,en,ex,rem=0,res=0;
	scanf("%d",&stops);
	while(stops--){
		scanf("%d%d",&ex,&en);
		rem=(rem-ex)+en;
		if(rem>res){
			res=rem;
		}
	}
	printf("%d",res);
	return 0;
}
