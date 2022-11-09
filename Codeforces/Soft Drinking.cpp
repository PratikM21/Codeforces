#include<stdio.h>
int main(){
        long int n,k,l,c,d,p,nl,np;
        long int t[5],temp,i,j;
	scanf("%ld %ld %ld %ld %ld %ld %ld %ld",&n,&k,&l,&c,&d,&p,&nl,&np);
	t[0]=(k*l)/nl;
	t[1]=c*d;
	t[2]=p/np;
	 for (i=0;i<3;i++){
            for (j=i+1;j<3;j++){
              if(t[i]>t[j]){
               temp=t[i];
                 t[i]=t[j];
                   t[j]= temp;
         }
      }
   }
    printf("%d",t[0]/n);
	return 0;
}
