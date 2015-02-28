#include <math.h>
#include <stdio.h>

void arc_length() {
	
	const double pi = 3.141592654;
	float d, a, l;
	
	printf("Diameter of circle: ");
	scanf("%f",&d);
	printf("Angle measure: ");
	scanf("%f",&a);
	
	if(a>360 || a<0){
		printf("Angle is not possible\n");
	} else {
		l = (pi*d) * (a/360);
		printf("length of arc: %f", l);
		printf("\n");
	}

}

