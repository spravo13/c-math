#include <math.h>
#include <stdio.h>

void cylinder_surface_area() {
	
	float r, h, sa;

	printf("Radius of cylinder: ");
	scanf("%f",&r);
	printf("Height of cylinder: ");
	scanf("%f",&h);

	sa = ((2*M_PI*r) * h) + ((M_PI*pow(r, 2)*2));

	printf("Surface area is: %f",sa);
	printf("\n");

}

