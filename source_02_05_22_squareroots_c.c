#include <stdio.h> // printf(), scanf()
#include <math.h> // sqrtf()


int main(void) {
	float value;
	float squareroot;

	printf("Give me a number and I will find its square root:\n");
	scanf("%f", &value);
	if(value >= 0.0) {
		squareroot = sqrtf(value);
		printf("You have given: %f\n", value);
		printf("The sqare root is: %f\n", squareroot);
	}
	return 0;
}


