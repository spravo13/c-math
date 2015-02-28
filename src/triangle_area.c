#include <math.h>
#include <stdio.h>

void triangle_area() {

	float b, h ,a;

	printf("Base length: ");
	scanf("%f", &b);
	printf("Height measurment: ");
	scanf("%f", &h);

	a = (b * h)/2;

	printf("Area is: %f", a);
	printf("\n");

}

