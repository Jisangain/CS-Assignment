//1. Write a program to generate prime numbers using the Sieve of Eratosthenes method.


#include <stdio.h>
#include <math.h>

//Prime		-->		saved prime numbers consecutively from index 0
//mark		-->		if x is prime then mark[x] == 0, else mark[x] == 1
//All the global variables are initialized with 0
int Prime[3000], nPrime, mark[10000];

//n is the maximum number for prime test
void sieve(int n){
	int i, j, limit = sqrt(n*1.0)+1;
	mark[1] = 1;
	for(i = 4; i <= n; i+=2) mark[i] = 1;
	Prime[nPrime++] = 2;

	for(i = 3; i <= n; i+=2){
		if(!mark[i]){
			Prime[nPrime++] = i;
			if(i <= limit){
				for(j = i*i; j<=n; j += i+i){
					mark[j] = 1;
				}
			}
		}
	}
}
int main(){
	sieve(2000);

	int k = 5, n = 15, m = 17;
	
	printf("%d-th prime number is %d\n", k, Prime[k]);

	if(mark[n]) printf("%d is not a prime number\n", n);
	else printf("%d is a prime number\n", n);

	if(mark[m]) printf("%d is not a prime number\n", m);
	else printf("%d is a prime number\n", m);
	
	return 0;
}