#include <stdio.h>
#include <time.h>
#include <math.h>

unsigned long fib1(unsigned long n){
	/*
	 * Solve for F(n) recursively
	 *
	 * O(2^n)
	 */
	if (n<=1)
		return n;
	return fib1(n-1)+fib1(n-2);
}

unsigned long fib2(unsigned long n){
	/*
	 * Solve for F(n) using an array to keep track
	 * of all values of f to eliminate repitition
	 * in above solution. 
	 *
	 * O(n)
	 */
	unsigned long f[n];
	int i;

	if (n == 0 || n == 1)
		return n;

	f[0] = 0;
	f[1] = 1;

	for (i=2; i<=(int)n; i++)
		f[i] = f[i-1] + f[i-2];
	return f[n];
}

unsigned long fib3(unsigned long n){
	/*
	 * Solve recurrence relation to get F(n)
	 *
	 * O(log(n))
	 */
	double num = pow(((1+sqrt(5)) / 2), n);
	return (int)(num / sqrt(5));
}

int main(){
	unsigned long n;
	clock_t t;
	printf("Give me an int n to print to: ");
	scanf("%ld", &n);

	t = clock();
	printf("F(n) acquired recursively: %ld\n", fib1(n));
	t = clock()- t;
	printf("Time taken to execute using this method (exponential): %f\n",((double)t)/CLOCKS_PER_SEC);
	
	printf("\n");

	t = clock();
	printf("F(n) acquired by solving using an array: %ld\n", fib2(n));
	t = clock()- t;
	printf("Time taken to execute using this method (linear): %f\n",((double)t)/CLOCKS_PER_SEC);
	
	printf("\n");

	t = clock();
	printf("F(n) acquired by solving recurrence relation: %ld\n", fib3(n));
	t = clock()- t;
	printf("Time taken to execute using solved method (logarithmic): %f\n",((double)t)/CLOCKS_PER_SEC);
	return 1;
}
