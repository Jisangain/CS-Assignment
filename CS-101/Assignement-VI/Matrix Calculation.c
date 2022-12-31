//3. Given two array X[2][n] and Y [2][n] containing random numbers, i.e., 2 rows and n columns. Write a program to solve the equation
//incompete
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
	sranc(time(0));

	int n = 10;
	int X[2][n], Y[2][n];
	for(int i = 0; i < 2;i++){
		for(int j = 0; j < n; j++){
			X[i][j] = rand();
			Y[i][j] = rand();
		}
	}
	long long int answer = 0;
	for(int i = 0; i < n; i++){

	}
	return 0;
}