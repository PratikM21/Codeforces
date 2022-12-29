#include<stdio.h>
int main(){
int n,m,i,j,k=0;
scanf("%d%d",&n,&m);
for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
        if(i%2!=0){
            printf("#");
        if(j==m){
            printf("\n");
            k++;
        }
        }
        else{
        if(k>0&&k%2!=0){
            if(j==m){
                printf("#");
                printf("\n");
            }
            else{
                printf(".");
            }
        }
        else if(k>0&&k%2==0){
            if(j==1){
                printf("#");
            }
            else{
                printf(".");
            }
            if(j==m){
                printf("\n");
            }
        }
        }
}
}

return 0;
}
