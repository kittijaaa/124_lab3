#include<stdio.h>
int main(){
	int i=0,j;
	long long x=0;
		scanf("%lld",&x);
	if(x==0||x==1)
		printf("2");
	while(x>1)
	if((x%2==0||x%3==0||x%5==0||x%7==0)&&(x!=2 && x!=3 && x!=5 && x!=7))
		x--;
	else{
		printf("%lld ",x);
		break;
	}


	return 0;
}
