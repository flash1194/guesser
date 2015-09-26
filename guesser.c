#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

typedef struct {

	int real_part;
	int imag_part;

} Complex;

int main () {

//Creation of random complex numbers
	srand((unsigned)time(NULL));	

	Complex c;
	c.real_part = rand() % 5;
	c.imag_part = rand() % 5;


//Create 2D array
	int n, i, j, k = 0;
	char * temp;
	
	printf("Enter the size of the array(n x n): ");
	scanf("%s", &temp);
	
	for (k = 0; k < strlen(temp); k++) {
		if (isalpha(temp[k])) {
			printf("Invalid input, defaulting to n = 5");
			n = 5;
		} else {
			n = atoi(temp);
		}
	}
		
	int *myArray[n][n];	

//Fill 2D array with random complex numbers
	
	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			myArray[i][j] += rand() % 5;
			printf("M[%d][%d]=%p\n", i, j, &myArray[i][j]);
		}
	}

//User input handling
	

	printf("\nM[0][0]=%x. M[i][j]=%x  What's i and j? (Or Q or H or HH or HHH):\n", &myArray[0][0], &myArray[rand() % 5][rand() % 5]);

	
	
	return 0;

}
