#include <math.h>
#include <stdio.h>

void circle_area() {

	double pi = 3.141592654;
	float r, a;

	printf("Radius Length: ");
	scanf("%f",&r);

	a = r*r*pi;

	printf("Area is: %f",a);
	printf("\n");

	return 0;
}
