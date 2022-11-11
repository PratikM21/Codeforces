#include<stdio.h>
int main(){
	long int num,times;
	scanf("%ld%ld",&num,&times);
	while(times--){
		if(num%10==0){
			num=num/10;
		}
		else{
			num--;
		}
	}
	printf("%ld",num);
	return 0;
}
