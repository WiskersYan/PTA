#include <stdio.h>

int Count_Digit ( const int N, const int D ) {
	int t,a[100],m=0,i=0,sum=0;
	if(N>=0) {
		t=N;
	} else {
		t=0-N;
	}
	if(t==0) {
		sum=1;
	} else {
		while((float)(t)>=1) {
			a[m]=t%10;
			t=t/10;
			m++;
		}
		for(i=0; i<m; i++) {
			if(a[i]==D) {
				sum++;
			}
		}
	}
	return sum;
}

int main()
{
    int N, D;
	
    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}
