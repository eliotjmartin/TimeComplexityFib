#include <stdio.h>
#include <time.h>
#include <math.h>

unsigned long fibonacci(unsigned long n){
	/*
	 * Solve for F(n) recursively
	 */
	if (n<=1)
		return n;
	return fibonacci(n-1)+fibonacci(n-2);
}

unsigned long improved_fibonacci(unsigned long n){
	/*
	 * Solve recurrence relation to get F(n)
	 */
	double num = pow(((1+sqrt(5)) / 2), n);
	return round(num / sqrt(5));
}

int main(){
	unsigned long n;
	clock_t t;
	printf("Give me an int n to print to: ");
	scanf("%ld", &n);

	t = clock();
	printf("F(n) acquired recursively: %ld\n", fibonacci(n));
	t = clock()- t;
	printf("Time taken to execute recursively: %f\n",((double)t)/CLOCKS_PER_SEC);
	
	printf("\n");

	t = clock();
	printf("F(n) acquired by solving recurrence relation: %ld\n", improved_fibonacci(n));
	t = clock()- t;
	printf("Time taken to execute using solved method: %f\n",((double)t)/CLOCKS_PER_SEC);
	return 1;
}
