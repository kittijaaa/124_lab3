#include <stdio.h>
int main(){
    int k=1,j = 2;
    scanf("%d", &k);
    if(k==1)
        printf("1\n") ;
    while(k != 1){
        while(k % j == 0){
            printf("%d\n", j);
            k /= j;
        }
        j++;
    }
    printf("0") ;
    return 0;
}
