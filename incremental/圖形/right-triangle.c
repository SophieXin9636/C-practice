#include <stdio.h>

/*  Assume n = 3
 *  Output:
 *  @@@
 *  @@
 *  @
 */

void print_triangle(int n);
void print_line(int n);


int main(void) {
	int n;
	printf("Please enter the length of triangle:\n");
	scanf("%d", &n);

	int i , j;	//counter

	/* Method-1: not use function */
	for(i = n; i >= 1; i--){
	  for(j = 0; j < i; j++){
	    printf("@");
	  }
	  printf("\n");
	}
	printf("\n");

	/* Method-2: use function */
	print_triangle(n);
	return 0;
}


// �h�榨�����T����
void print_triangle(int row)  // row �O���
{
    for (int i=row; i>=1; i--) print_line(i);
}

// �h�r����
void print_line(int L)  // L �O�@�檺����
{
    for (int i=1; i<=L; i++) printf("@");
    printf("\n");
}

// URL: http://www.csie.ntnu.edu.tw/~u91029/AlgorithmDesign.html#1
