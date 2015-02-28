#include <math.h>
#include <stdio.h>

void sphere_volume() {

	const double pi = 3.14152965;
	float r, v;

	printf("Radius Length: ");
	scanf("%f", &r);

	v = (4/3) * (pi * (pow(r,3)));

	printf("Volume is: %f",v);
	printf("\n");

}

