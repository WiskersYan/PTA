#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N ){
	int a[100],m = 0,k = 0,i,j,t=N;
	float x = sqrt(N);
	int y = x;
	while((float)(t)>=1){
		a[m]=t%10;
		t=t/10;
		m++;
	}
	for(i=0;i<m-1;i++){
		for(j=i+1;j<m;j++){
			if(a[i]==a[j]){
				k=1;
				break;
			}
		}
	}
	if(x == y && k == 1){
		return 1;
	}
	else{
		return 0;
	}
}

int main()
{
    int n1, n2, i, cnt;
	
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}
