#include <math.h>
#include <stdio.h>

void cylinder_volume() {

	float h, r, v;

	printf("Height of cylinder: ");
	scanf("%f",&h);
	printf("Radius of cylinder: ");
	scanf("%f",&r);

	v = M_PI * r * r * h;

	printf("Volume is: %f", v);
	printf("\n");

}

