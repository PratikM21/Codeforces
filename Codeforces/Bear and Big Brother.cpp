#include<stdio.h>
int main(){
	int a,b,y=1;
	scanf("%d %d",&a,&b);
	while(a<=b){
		a=a*3;
		b=b*2;
		if(a<=b){
			y++;
		}
	}
	printf("%d",y);
	return 0;
}
