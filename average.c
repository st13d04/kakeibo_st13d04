#include "average.h"

int average(int payments[]) {
	int result = 0,i;
	int num = sizeof(payments) / sizeof(int);

	for (i=0; i<num; i++) {
		result += payments[i];
	}

	return result / num;
}
