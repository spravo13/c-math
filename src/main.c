#include <stdio.h>
#include <math.h>
#include <string.h>
#include "declare.h"

void programs() {
	printf("Program name\t\tCommand\n\n");
//	printf("degree to radian\td2r\n");
//	printf("radian to degree\tr2d\n");
	printf("circle area\t\tca\n");
//	printf("trapezoid area\t\tta\n");
	printf("parallelogram area\tpa\n");
//	printf("triangle area\t\ttea\n");
	printf("cylinder surface area\tcsa\n");
	printf("cylinder volume\t\tcv\n");
//	printf("sphere surface area\tssa\n");
//	printf("sphere volume\t\tsv\n");
	printf("circumference\t\tc\n");
	printf("arc length\t\tal\n");
//	printf("sector area\t\tsa\n");
//	printf("quadratic formula\tqf\n");

	printf("\n");
}

int main() {
	char program[4];
	while (strcmp(program, "q") != 0) {
		printf("Select a program: ");
		scanf("%4s",program);
		if (strcmp(program, "p") == 0) {
			programs();
		} else if (strcmp(program, "q") == 0) {
			printf("quitting...\n");
/*		} else if (strcmp(program, "d2r") == 0) {
			degree_to_radian();
		} else if (strcmp(program, "r2d") == 0) {
			radian_to_degree();
*/		} else if (strcmp(program, "ca") == 0) {
			circle_area();
/*		} else if (strcmp(program, "ta") == 0) {
			trapezoid_area();
*/		} else if (strcmp(program, "pa") == 0) {
			parallelogram_area();
/*		} else if (strcmp(program, "tea") == 0) {
			triangle_area();
*/		} else if (strcmp(program, "csa") == 0) {
			cylinder_surface_area();
		} else if (strcmp(program, "cv") == 0){
			cylinder_volume();
/*		} else if (strcmp(program, "ssa") == 0){
			sphere_surface_area();
		} else if (strcmp(program, "sv") == 0){
			sphere_volume();
*/		} else if  (strcmp(program, "c") == 0){
			circumference();
		} else if (strcmp(program, "al") == 0){
			arc_length();
/*		} else if (strcmp(program, "sa") == 0){
			sector_area();
		} else if (strcmp(program, "qf") == 0){
			quadratic_formula();
*/		} else {
			printf("That's not a program, type \"p\" for a list\n");
		}
	}
	return 0;
}
