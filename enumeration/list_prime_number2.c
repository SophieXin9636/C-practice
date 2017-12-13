#include <stdio.h>

/* using array
 * and this method is more difficult.
 */

int main(){
	int primearray[101];
	int i, n, j = 2;
	scanf("%d", &n);

	for(i = 2; i <= n; i ++){
		primearray[i] = 0;
	}

	while(j * j <= n) {
		while( primearray[j] == 1)
		  j++;

        // ex: 2 -> 4 -> 6, 8, 10
        // ex: 3 -> 6 -> 9, 12, 15
        // ex: 11 -> 22 -> 33, 44, 55....
        // 他的因數加上原數仍為質數
		for(i = 2 * j; i <= n; i += j){
		  primearray[i] = 1;
		}
		j++;
	}
	for(i = 2; i <= n; i ++)
		if( primearray[i] == 0) // isPrime
			printf("%d ", i);
}

// reference: NTU C course C-slide
