//3. Given two array X[2][n] and Y [2][n] containing random numbers, i.e., 2 rows and n columns. Write a program to solve the equation

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double absolute(double x){
    if(x<0)return -x;
    return x;
}
int main(){
	srand(time(0));
	
	int n = 10;
	long long int X[2][n], Y[2][n];
	for(int i = 0; i < 2;i++){
		for(int j = 0; j < n; j++){
			X[i][j] = rand();
			Y[i][j] = rand();
		}
	}
	long double answer = 0;
	for(int i = 0; i < n; i++){
		//absolute value is added in the fuction. Without abs the answer could be complex number
		answer += sqrt(absolute(pow(X[1][i]-X[0][i],2) - pow(Y[1][i]-Y[0][i],2)));
	}
	answer/=n;
	printf("The answer of the equation is %Lf\n", answer);
	return 0;
}