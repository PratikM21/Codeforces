#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[100],n,m,j,i,sum=0,temp,neg=0,t=0;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	 for (i = 0; i < n; ++i){
              for (j = i + 1; j < n; ++j){
                if (a[i] > a[j]){
                    temp =  a[i];
                    a[i] =  a[j];
                    a[j] = temp;
                }
            }
        }
        for(i=0;i<m;i++){
        	if(a[i]<0){
        		neg=neg+a[i];
	        }
	        else{
	        	break;
	        }
        }
        printf("%d",abs(neg));
        return 0;
}
