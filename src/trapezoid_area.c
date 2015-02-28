#include <math.h>
#include <stdio.h>

void trapezoid_area() {

	float h, b1, b2, a;

	printf("Height measurment: ");
	scanf("%f",&h);
	printf("Length of first base: ");
	scanf("%f",&b1);
	printf("Length of second base: ");;
	scanf("%f",&b2);

	a = ((b1 + b2) / 2) * h;

	printf("Area is: %f", a);
	printf("\n");

}

