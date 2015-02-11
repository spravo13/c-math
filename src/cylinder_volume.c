#include <math.h>
#include <stdio.h>

void cylinder_volume() {

	const double pi = 3.141529654;
	float h, r, v;

	printf("Height of cylinder: ");
	scanf("%f",&h);
	printf("Radius of cylinder: ");
	scanf("%f",&r);

	v = pi * r * r * h;

	printf("Volume is: %f", v);
	printf("\n");

}
