#include<stdio.h>
#include"sum.h"
#include"average.h"

int main() {
	int payments[5], i;

	for (i=0; i<5; i++) {
		scanf("%d", &payments[i]);
		printf("payments[%d] = %d\n", i, payments[i]);
	}

	printf("sum : %d\n", sum(payments));
	printf("average : %d\n", average(payments));

	return;
}
