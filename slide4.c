/* Let's make a Fahrenheit to Celsius conversion table */
/* #include standard libary */
#include <stdio.h>
#include "head.h"

/* #define NAME value */

/* function declarations */

/* print table for F = 0, 20, ..., 300 */
int main(void)
{
	/* variable declarations*/
	float i;
	float F, C;

	float lower = 0; 	/* lower limit of temp table */
	float upper = 300;/* upper limit of temp table */
	float step = 20;	/* step size */

	/* Use a loop */
	printf("%10s\t%10s\n", "Fahrenheit", "Celcius");
	for (i = lower; i <= upper; i += step)
	{
		F = i;
		C = FtoC(F);
		printf("%10.2f\t%-10.2f\n", F, C);
	}

	printf("%10s\t%10s\n", "Celsius", "Fahrenheit");
	for (i = lower; i <= upper; i += step)
	{
		C = i;
		F = CtoF(C);
		printf("%10.2f\t%10.2f\n", C, F);
	}

	return (0);
	/* Return 0 */
}

/* Convert F to C using formula C = (5/9)(F-32) */
float FtoC(float F)
{
	float C;

	C = 5 * (F - 32) / 9;

	return (C);
}


/**
 * description
 * @C: a float in degrees celsius
 * Return: a float in degrees fahrenheit
*/
float CtoF(float C)
{
	float F;

	F = (9 * C) / 5 + 32;

	return (F);
}
/**
 * Discussion:
 *	- integer math
*/

/* Convert C to F using formula F = C(9/5) + 32 */

/* comment in here */
