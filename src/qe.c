#include "qe.h"

int quadratic_equation(float a, float b, float d, float *x1, float *x2) {
	if (d > 0) {
		*x1 = (-b + sqrt(d)) / (2 * a);
		*x2 = (-b - sqrt(d)) / (2 * a);
		return FOUND_2_ROOTS;
	}

	if (d == 0) {
		*x1 = -b / (2 * a);
		return FOUND_1_ROOT;
	}

	if (d < 0)
		return ROOT_NOT_FOUND;
}