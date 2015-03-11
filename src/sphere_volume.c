#include <math.h>
#include <stdio.h>

void sphere_volume() {

	float r, v;

	printf("Radius Length: ");
	scanf("%f", &r);

	v = (4/3) * (M_PI * (pow(r,3)));

	printf("Volume is: %f",v);
	printf("\n");

}

