#include <stdio.h>

int isPrime(int number);
void print_prime_number(int n);

int main(void) {
	int number;
	printf("Please enter the range of prime number: ");
	scanf("%d", &number);
	printf("\n");

	print_prime_number(number);
}

int isPrime(int number){
	int i; // counter

	// if the number can be divided, then it isn't prime number.
	for(i = 2; i < number; i++){
		if(number % i == 0) return 0;
	}
	return 1;
}

void print_prime_number(int n){

	int i;
	printf("The list of prime number within the %d:\n 2", n);
	for(i = 3; i <= n; i++)
		if( isPrime(i) ) printf(", %d", i);
}
