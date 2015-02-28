#include <math.h>
#include <stdio.h>

void circumference() {

	const double pi = 3.141529654;
	float d, c;

	printf("Diameter Length: ");
	scanf("&f",&d);

	c = pi * d;

	printf("circumference: %f",c);
	printf("\n");

}

