#include<stdio.h>
int main () {
    int n,p[48]={0},i,x,y,v,j ;
    scanf("%d",&n) ;
    for(i=1;i<=n;i++){
        scanf("%d",&x) ;
        scanf("%d",&y) ;
        p[x] += y ;
    }
    v=p[0] ;
    for(i=1;i<48;i++){
        if(v<=p[i]){
            v = p[i] ;
            j = i ;
        }

    }
    printf("%d %d",v,j+1) ;
}
