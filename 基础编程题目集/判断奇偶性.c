#include <stdio.h>

int even( int n ){
	int key=0;
	if(n==0||n%2==0){
		key=1;
	}
	return key;
}

int main()
{    
    int n;

    scanf("%d", &n);
    if (even(n))
        printf("%d is even.\n", n);
    else
        printf("%d is odd.\n", n);

    return 0;
}
