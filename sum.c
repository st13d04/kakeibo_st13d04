#include"sum.h"
 
int sum(int payments[]) {
	int result = 0,i;
	int num = sizeof(payments) / sizeof(payments[0]);

	for (i=0; i<num; i++) {
		result += payments[i];
	}

	return result;
}
