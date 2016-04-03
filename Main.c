
/* CS261- Assignment 0*/
/* Name: Megan Aldridge
* Date: April 2, 2016
* Solution description:
*	This program converts a given number (inches) to the equivalent number (centimeters). 
*/

#include <stdio.h>
#include <string.h>


float convertToCent(float inchVal) {
	float centVal;
	float conversionVal = 2.54;

	centVal = inchVal * conversionVal;

	return centVal;
}

float convertToInch(float centVal) {
	float inchVal;
	float conversionVal = 0.393701;

	inchVal = centVal * conversionVal;

	return inchVal;
}

int main() {

	float input;
	float numInches;
	float numCentm;

	printf("Enter a number and I will convert it");
	printf("\n1.From inches to centimers");
	printf("\n2.From centimeters to inches.\n");
	printf("\nNumber: ");

	scanf_s("%g", &input);

	numCentm = convertToCent(input);
	numInches = convertToInch(input);

	printf("\n%g inches is equivalent to %g centimeters\n", input, numCentm);

	printf("%g centimeters is equivalent to %g inches", input, numInches);


	return 0;
}

