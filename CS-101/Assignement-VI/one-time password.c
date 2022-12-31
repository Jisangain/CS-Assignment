//2. Write a program to generate a random one-time password of eight characters long. The passwordshould contain at least one small letter, one capital letter, one symbol, and one digit.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//It will keep generating random password until all the condition satisfied

int main(){
	srand(time(0));
	int k = 0;
	char charset[10];
	while(1){
		int upper = 0, lower = 0, number = 0, special = 0;
		for(int i = 0; i < 8; i++){
			//only ASCII 32 to 126 are printable characters
			charset[i] = rand()%95 + 32;
			if(charset[i] <= 'z' && charset[i] >= 'a')lower++;
			else if(charset[i] <= 'Z' && charset[i] >= 'A')upper++;
			else if(charset[i] <= '9' && charset[i] >= '0')number++;
			else special++;
		}
		if(upper && lower && number && special) break;
	}
	printf("%s is a randomly generated password", charset);
	return 0;
}