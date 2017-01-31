// Performs a bubble sort on 5 numbers entered by the user.

#include <stdio.h> // printf(), scanf() 


int main(void) {
	int numbers[5]; // The array to sort.
	int i; // Loop index.
	int aux; // Temp var used for swapping.
	int swapped; // # of values swapped in this pass.
	// Ask user for 5 values.
	for (i = 0; i < 5; i++) {
		printf("\nEnter value #%i\n",i + 1);
		scanf("%d",&numbers[i]);
	}
	
	// Sort the values.
	do {
		swapped = 0;
		// We could actually reduce loop bound by one each pass.
		// Each pass will bubble one value to the end of the list.
		for (i = 0; i < 4; i++) 
			if (numbers[i] > numbers[i + 1]) {
			    swapped = 1;
			    aux = numbers[i];
			    numbers[i] = numbers[i + 1];
			    numbers[i + 1] = aux;
			 }
	} while(swapped);
	
	// Print results.
	printf("\nSorted array: ");
	for(i = 0; i < 5; i++)
		printf("%d ",numbers[i]);
	printf("\n");
	return 0;
} // main(...)


