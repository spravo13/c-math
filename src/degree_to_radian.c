#include <math.h>
#include <stdio.h>

void degree_to_radian() {

	float d, r, rpi;

	printf("Degrees: ");
	scanf("%f",&d);

	r = d*(M_PI/180);
	rpi = d/180;

	printf("%f", r);
	printf(" or %f", rpi);
	printf("π radians\n");

}

