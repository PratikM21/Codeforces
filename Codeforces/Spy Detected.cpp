#include<stdio.h>
int main(){
	int t,n,a[101],i,j;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);//7,5,7,7
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);//i=0,j=1
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(a[i]!=a[j]){
				if(a[j]==a[j+1]){
					printf("%d\n",i+1);
					break;
			
				}	
				else{
				  printf("%d\n",j+1);	
				break;
				}
				}
			}
			break;
		}
	}
	return 0;
}
