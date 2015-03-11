#include <math.h>
#include <stdio.h>

void circumference() {

	float d, c;

	printf("Diameter Length: ");
	scanf("&f",&d);

	c = M_PI * d;

	printf("circumference: %f",c);
	printf("\n");

}

