#include <math.h>
#include <stdio.h>

void circle_area() {

	float r, a;

	printf("Radius Length: ");
	scanf("%f",&r);

	a = r*r*M_PI;

	printf("Area is: %f",a);
	printf("\n");

}

