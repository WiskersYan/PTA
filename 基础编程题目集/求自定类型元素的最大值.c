#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Max( ElementType S[], int N ){
	ElementType Max=S[0];
	int i;
	for(i=1;i<N;i++){
		if(Max<S[i]){
			Max=S[i];
		}
	}
	return Max;
}

int main ()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &S[i]);
    printf("%.2f\n", Max(S, N));

    return 0;
}
