#include<stdio.h>
int main ()
{
    int i,j,k[4],x=0,y,u=1,l ;
    for(i=0; i<5; i++)
    {
        for(j=0,x=0; j<4; j++)
        {

                scanf("%d",&u) ;
                x += u ;
        }

        k[i]= x ;
    }
    y=k[0] ;
    for(i=1; i<5; i++)
    {
        if(y<=k[i])
        {
            y = k[i] ;
            l = i ;
        }
    }
    printf("%d %d",l+1,y) ;

    return 0 ;
}

