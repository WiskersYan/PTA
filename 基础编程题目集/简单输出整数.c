#include <stdio.h>

void PrintN(int N){
	int i = 1;
	for(i;i <= N;i++){
		printf("%d\n",i);
	}
}

int main ()
{
    int N;

    scanf("%d", &N);
    PrintN( N );

    return 0;
}
