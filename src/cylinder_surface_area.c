#include <math.h>
#include <stdio.h>

void cylinder_surface_area() {
	
	double pi = 3.141592654;
	float r, h, sa;

	printf("Radius of cylinder: ");
	scanf("%f",&r);
	printf("Height of cylinder: ");
	scanf("%f",&h);

	sa = ((2*pi*r) * h) + ((pi*pow(r, 2)*2));

	printf("Surface area is: %f",sa);
	printf("\n");

}

