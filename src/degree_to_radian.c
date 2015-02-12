#include <math.h>
#include <stdio.h>

void degree_to_radian() {

	const double pi = 3.141592654;
	float d, r, rpi;

	printf("Degrees: ");
	scanf("%f",&d);

	r = d*(pi/180);
	rpi = d/180;

	printf("%f", r);
	printf(" or %f", rpi);
	printf("π radians\n");

}
