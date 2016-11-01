#include "average.h"

int average(int payments[]) {
	int result = 0,i;
	int num = 5; //sizeof(payments) / sizeof(payments[0]);

	for (i=0; i<num; i++) {
		result += payments[i];
	}

	return result / num;
}
