/* to be able to use printf */
#include <stdio.h>

/* to be able to use timimg fucntionality i.e. clock()*/
#include <time.h>

int main() {

	/* start the clock */
	clock_t begin = clock();

	/* declare variables*/
	int n = 1;
	double fact = 1, e = 1;

	/* program introduction */
	printf("This program calculates the Euler number for 50 terms showing each step\n\n");

	/* start the loop to calculate euler number */
	for (n = 1; n <= 50; n = n + 1) {
		fact = fact * n;
		e = e + (1 / (fact));
		printf("The euler number for %d terms is %.20lf\n", n, e);
	}

	/* end the clock*/
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	/* print the result */
	printf("\nThe time elapsed is %f\n", time_spent);

	return 0;

}