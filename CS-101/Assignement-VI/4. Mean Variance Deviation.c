//4. Given an array A[] containing n random numbers. Write a program to find the mean, variance, and standard deviation of the given array.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
	srand(time(0));

	int n = 10;
	int A[n];
	for(int i = 0; i < n;i++){
		A[i] = rand();
	}
	
	long double meu = 0;
	//mean
	for(int i = 0; i < n;i++){
		meu += A[i];
	}


	long double sigma2 = 0;
	//variance
	for(int i = 0; i < n;i++){
		sigma2 += pow(A[i] - meu, 2);
	}
	sigma2/=n;

	
	long double sigma = 0;
	//standard deviation
	sigma = sqrt(sigma2);

	printf("The mean value is %Lf\nThe variance value is %Lf\nThe standard deviation value is %Lf\n", meu, sigma2, sigma);

	return 0;
}