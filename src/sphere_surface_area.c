#include <math.h>
#include <stdio.h>

void sphere_surface_area() {

	const double pi = 3.141529654;
	float r, sa;

	printf("Radius Length: ");
	scanf("%f",&r);

	sa = 4 * pi * pow(r,2);

	printf("Surface area is: %f", sa);
	printf("\n");

}
