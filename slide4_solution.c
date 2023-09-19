/* Let's make a Fahrenheit to Celsius conversion table */
#include <stdio.h>

/* #define NAME value */
#define LOWER 	0.0	/* lower limit of temp table */
#define UPPER 	300.0	/* upper limit of temp table */
#define	STEP	20.0	/* step size */

/* function declarations */
float f_to_c(float F);
float c_to_f(float C);


/* print table for F = 0, 20, ..., 300 */
int main(void)
{
	/* variable declarations*/
	float F, C;

	printf("%10s\t%10s\n", "Fahrenheit", "Celsius");
	for (F = LOWER; F <= UPPER; F += STEP)
	{
		printf("%10.0f\t%10.2f\n", F, f_to_c(F));
	}

	printf("\n%10s\t%10s\n", "Celsius", "Fahrenheit");
	for (C = LOWER; C <= UPPER; C += STEP)
	{
		printf("%10.0f\t%10.2f\n", C, c_to_f(C));
	}

	return (0);
}

/* Convert F to C using formula C = (5/9)(F-32) */
/**
 * Discussion:
 *	- integer math
*/
float f_to_c(float F)
{
	float C = (5.0 / 9.0) * (F - 32);
	return (C);
}

/* F = C(9/5) + 32 */
float c_to_f(float C)
{
	float F = (9.0 / 5.0 * C) + 32;
	return (F);
}
