#include <math.h>
#include <stdio.h>

void parallelogram_area() {

	float b, h ,a;

	printf("Base length: ");
	scanf("%f", &b);
	printf("Height measurment: ");
	scanf("%f", &h);

	a = b * h;

	printf("Area is: %f", a);
	printf("\n");

}
