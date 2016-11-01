#include"sum.h"
 
int sum(int payments[]) {
	int result = 0,i;
	int num = 5;// sizeof(payments) / sizeof(payments[0]); ←ポインタのサイズしか返ってこないかと

	for (i=0; i<num; i++) {
		result += payments[i];
	}

	return result;
}
