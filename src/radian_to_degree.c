#include <math.h>
#include <stdio.h>

void radian_to_degree() {

	const double pi = 3.141529654;
	float r, d;

	printf("Number of radians: ");
	scanf("%f", &r);

	d = r*(180/pi);

	printf("%f", d);
	printf(" degrees \n");

}

