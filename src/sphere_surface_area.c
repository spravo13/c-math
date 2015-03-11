#include <math.h>
#include <stdio.h>

void sphere_surface_area() {

	float r, sa;

	printf("Radius Length: ");
	scanf("%f",&r);

	sa = 4 * M_PI * pow(r,2);

	printf("Surface area is: %f", sa);
	printf("\n");

}

