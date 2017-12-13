#include <stdio.h>
#include <math.h>

#define n 4
// Polynomial functions 有4項，最高次方為3
#define x 10
// Polynomial functions variable

/* Horner's rule */

int horner_incremental();
int horner_iterative();
int horner_recursive(int *a, int k);


int main(void) {
	int a[n] = {6, 9, 6, 2};
	printf("incremental method: %d\n", horner_incremental() );
	printf("iterative method: %d\n", horner_iterative() );
	printf("recursive method: %d\n", horner_recursive(a, n) );

	return 0;
}

/*	Incremental method			*
 *	   0 + 2*10^3 = 2000		*
 *	2000 + 6*10^2 = 2600		*
 *	2600 + 9*10^1 = 2690		*
 *	2690 + 6*10^0 = 2696 		*
 *	缺點：需用到次方運算(pow)	*
 */
int horner_incremental(){
	int a[n] = {6, 9, 6, 2};
	int i; // counter
	int sum = 0;

	for(i = n - 1; i >= 0; i--){
		sum += a[i] * pow(10, i);
	}
	return sum;
}

/* Iterative method 				*
 * 0*10   + 2 = 2					*
 * 2*10   + 6 = 26					*
 * 26*10  + 9 = 269					*
 * 269*10 + 6 = 2696				*
 * differentiate from Incremental,	*
 * iterative method 不需做次方運算	*
 */
int horner_iterative(){
	int a[n] = {6, 9, 6, 2};
	int i; // counter
	int sum = 0;

	for(i = 0; i < n; i++){
		sum = sum * x + a[n - i - 1];
	}
	return sum;
}

/* recursive method */
int horner_recursive(int *a, int k){
	if(k == 0) return a[0];
	else return(a[k]*pow(x, k) + horner_recursive(a, --k));
}
