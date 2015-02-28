#include <math.h>
#include <stdio.h>

void quadratic_formula() {

	float a, b, c, d, qf1, qf2;
	int dis;

	printf("A value: ");
	scanf("%f", &a);
	printf("B value: ");
	scanf("%f", &b);
	printf("C value: ");
	scanf("%f", &c);

	dis = pow(b,2) - (4 * a * c);
	
	if (dis < 0) {
		printf("No real solutions\n");
	} else {	
		d = (pow(b,2)) - (4*a*c);
		d = pow(d,.5);
		qf1 = (-b + d) / 2 * a;
		qf1 = (-b - d) / 2 * a;

		if(dis == 0) {
			printf("Solution: (%f", qf1);
			printf(",0)\n");
		} else {
			printf("Solution 1: (%f", qf1); 
			printf(",0)\n");
			printf("Solution 2: (%f", qf2);
			printf(",0)\n");;
		}
	}
}

