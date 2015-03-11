#include <math.h>
#include <stdio.h>

void radian_to_degree() {

	float r, d;

	printf("Number of radians: ");
	scanf("%f", &r);

	d = r*(180/M_PI);

	printf("%f", d);
	printf(" degrees \n");

}

