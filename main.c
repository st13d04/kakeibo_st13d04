#include<stdio.h>
#include"sum.h"
#include"average.h"

int main() {
	int payments[5], i;

	for (i=0; i<5; i++) {
		printf("pay > ");
		scanf_s("%d", &payments[i], 4);
	}

	printf("sum : %d\n", sum(payments));
	printf("average : %d\n", average(payments));


	return;
}
