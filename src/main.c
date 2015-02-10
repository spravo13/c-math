#include <stdio.h>
#include <math.h>
#include "declare.h"

void programs() {
	printf("Program name\t\tCommand\n\n");
	printf("degree to radian\td2r\n");
	printf("radian to degree\tr2d\n");
	printf("circle area\t\tca\n");
	printf("trapezoid area\t\tta\n");
	printf("parallelogram area\tpa\n");
	printf("triangle area\t\ttea\n");
	printf("cylinder surface area\tcsa\n");
	printf("cylinder volume\t\tcv\n");
	printf("sphere surface area\tssa\n");
	printf("sphere volume\t\tsv\n");
	printf("circumference\t\tc\n");
	printf("arc length\t\tal\n");
	printf("sector area\t\tsa\n");
	printf("quadratic formula\tqf\n");

	printf("\n");
}

int main() {
	char program[4];
	while (program != "q") {
		printf("Select a program: ");
		scanf("%4s",program);
		if (program == "p") {
			programs();
		} else if (program == "q") {
			printf("quitting...\n");
		} else if (program == "d2r") {
			degree_to_radian();
		} else if (program == "r2d") {
			radian_to_degree();
		} else if (program == "ca") {
			circle_area();
		} else if (program == "ta") {
			trapezoid_area();
		} else if (program == "pa") {
			parallelogram_area();
		} else if (program == "tea") {
			triangle_area();
		} else if (program == "csa") {
			cylinder_surface_area();
		} else if (program == "cv"){
			cylinder_volume();
		} else if (program == "ssa"){
			sphere_surface_area();
		} else if (program == "sv"){
			sphere_volume();
		} else if  (program == "c"){
			circumference();
		} else if (program == "al"){
			arc_length();
		} else if (program == "sa"){
			sector_area();
		} else if (program == "qf"){
			quadratic_formula();
		} else {
			printf("That's not a program, type \"p\" for a list\n");
			printf(program);
		}
	}
	return 0;
}
