// Find the larger of two numbers.

#include <stdio.h>

int main(void) {
	int number1;
	int number2;

	// The larger of the two numbers.
	int max; 

	// Read in two numbers.
	scanf("%d",&number1);
	scanf("%d",&number2);

	max = number1;
	if (number2 > max)
		max = number2;

	printf("The largest number is %d \n",max);

	return 0;
}


