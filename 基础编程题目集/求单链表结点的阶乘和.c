#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;
struct Node {
    int Data; /* 存储结点数据 */
    PtrToNode Next; /* 指向下一个结点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */

int FactorialSum( List L ){
	int sum = 0,a;
	int i,j;
	while(L != NULL){
		i = 1;
		a = L->Data;
		if(a==0){
			i=1;
		}
		else if(a==1){
			i=1;
		}
		else{
			for(j=1;j<=a;j++){
			i = i * j;
		}
		}
		sum = sum + i;
		L = L->Next;
	}
	return sum;
}

int main()
{
    int N, i;
    List L, p;

    scanf("%d", &N);
    L = NULL;
    for ( i=0; i<N; i++ ) {
        p = (List)malloc(sizeof(struct Node));
        scanf("%d", &p->Data);
        p->Next = L;  L = p;
    }
    printf("%d\n", FactorialSum(L));

    return 0;
}
