#include <ctest.h>

#include <qe.h>

CTEST(solution_of_quadratic_equations, two_roots) {
	//Given
	const float a = 1;
	const float b = -13;
	const float d = 25;

	//When
	float x1, x2;
	const int result = quadratic_equation(a, b, d, &x1, &x2);

	// Then
	const float expected_x1 = 9, expected_x2 = 4;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(FOUND_2_ROOTS, result);
}

CTEST(solution_of_quadratic_equations, one_root) {
	// Given
	const float a = 3;
	const float b = -18;
	const float d = 0;

	// When
	float x1, x2;
	const int result = quadratic_equation(a, b, d, &x1, &x2);

	// Then
	const float expected_x1 = 3;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_EQUAL(FOUND_1_ROOT, result);
}

CTEST(solution_of_quadratic_equations, no_root) {
	// Given
	const float a = 1;
	const float b = 15;
	const float d = -175;

	// When
	float x1, x2;
	const int result = quadratic_equation(a, b, d, &x1, &x2);

	// Then
	ASSERT_EQUAL(ROOT_NOT_FOUND, result);
}

CTEST(solution_of_quadratic_equations, non_quadratic_equation) {
	// Given
	const float a = 0;
	const float b = 25;
	const float d = 125;

	// When
	float x1, x2;
	const int result = quadratic_equation(a, b, d, &x1, &x2);

	// Then
	ASSERT_EQUAL(ROOT_NOT_FOUND, NON_QUADRATIC_EQUATION);
