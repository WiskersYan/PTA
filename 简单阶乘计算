#include <stdio.h>

int Factorial( const int N ){
	int a=0;
	while(N>=0){
		a=1;
		if(N==0){
			a=1;
		}
		else if(N==1){
			a=1;
		}
		else{
			int i;
			for(i=2;i<=N;i++){
				a=a*i;
			}
		}
		break;
	}
	return a;	
}

int main()
{
    int N, NF;
	
    scanf("%d", &N);
    NF = Factorial(N);
    if (NF)  printf("%d! = %d\n", N, NF);
    else printf("Invalid input\n");

    return 0;
}
