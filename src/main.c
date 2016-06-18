#include <stdio.h>
#include <math.h>
#include "qe.h"

int main () {
	float a, b, c, d, x1, x2;

	printf("input coefficients:\n");

	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

	d = (b * b) - (4 * a * c);

	int result = quadratic_equation(a, b, d, &x1, &x2);

	if (result == FOUND_2_ROOTS) {
		printf("roots: x1 = %2.2f, x2 = %2.2f", x1, x2);
	}

	if (result == FOUND_1_ROOT) {
		printf("one root: x1 = %2.2f", x1);
	}

	if (result == ROOT_NOT_FOUND) {
		printf("no roots");
	}
	
	if (result == NON_QUADRATIC_EQUATION) {
		printf("ERROR - non quadratic equation");
	}

	return 0;
}
