#include <math.h>
#include <stdio.h>

void sector_area() {

	float r, a, sa;

	printf("Radius of circle: ");
	scanf("%f", &r);
	printf("Angle measure: ");
	scanf("%f", &a);

	if(a>360 || a<0){
		printf("Angle is not possible\n");
	} else {
		sa = (M_PI*pow(r, 2)) * (a/360);

		printf("Sector area: %f", sa);
		printf("\n");
	}
}

